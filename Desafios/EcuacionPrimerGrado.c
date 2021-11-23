#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_SIZE 100

void leerNumeros(char* buffer);
int getSumaIndependientes(char* buffer, size_t len);
int getSumaDependientes(char* buffer, size_t len);
int getFullNumber(char* buffer, int pos, size_t len);
void simplicarFraccion(int* numerador, int* denominador);
char checkNumber(char n);
void showResultado(int sumaDependientes, int sumaIndependientes);

int main() {
	setlocale(LC_ALL, "spanish");
	
	char ecuacion[MAX_SIZE];
	size_t len;

	leerNumeros((char *) ecuacion);

	len = strlen(ecuacion);
	
	showResultado(getSumaDependientes(ecuacion, len), getSumaIndependientes(ecuacion, len));

	return 0;
}

void leerNumeros(char* buffer) {
	char s;

	while(s != '\n' && s != EOF){
		scanf("%1c", &s);
		
		if(s != '\n' && s != EOF) *buffer++ = s;
	}
}

int getSumaIndependientes(char* buffer, size_t len) {
	int signo = -1, i;
	int temp, aux;
	int suma = 0;
	
	for(i = 0; i < len; i++) {
		temp = buffer[i];
		
		if(temp == '=') signo = 1;

		if(checkNumber(temp)) {
			temp = getFullNumber(buffer, i, len);;
			aux = temp;
			
			do
				i++;
			while((temp /= 10) != 0);
				
			if(buffer[i] != 'x')
				suma += aux * signo;
		}
	}
	
	return suma;
}

int getSumaDependientes(char* buffer, size_t len) {
	int signo = 1, i, j;
	int temp, aux = 1;
	int suma = 0;
	
	for(i = 0; i < len; i++) {
		temp = buffer[i];
		
		if(temp == '=') signo = -1;

		if(checkNumber(temp)) {
			temp = getFullNumber(buffer, i, len);;
			aux = temp;
			
			do
				i++;
			while((temp /= 10) != 0);
		}
		
		if(buffer[i] == 'x') {
			for(j = i - 1; j >= 0; j--) {
				if(checkNumber(buffer[j]))
					break;
			
				if(buffer[j] == '-') {
					signo = -1;
					break;
				}
			}
			
			suma += aux * signo;
		}
	}

	return suma;
}

int getFullNumber(char* buffer, int pos, size_t len) {
	int i, temp, signo = 1;
	for(i = pos - 1; i >= 0; i--) {
		if(checkNumber(buffer[i]))
			break;
			
		if(buffer[i] == '-') {
			signo = -1;
			break;
		}
	}
	
	temp = buffer[pos] - 48;

	for(i = pos + 1; i < len; i++) {
		if(checkNumber(buffer[i])) {
			temp = temp * 10 + (buffer[i] - 48);
			continue;
		}
		
		break;
	}

	return temp * signo;
}

void simplicarFraccion(int* numerador, int* denominador) {
	int i;

	if(*denominador < 0) {
		*denominador *= -1;
		*numerador *= -1;
	}

	for(i = 2; i <= ((abs(*numerador) > abs(*denominador)) ? abs(*numerador) / 2 : abs(*denominador) / 2); i++) {
		if(!(*numerador % i) && !(*denominador % i)) {
			*numerador /= i;
			*denominador /= i;
			i = 2;
		}
	}
}

char checkNumber(char n) {
	if(n < 48 || n > 57)
		return 0;
		
	return 1;
}

void showResultado(int sumaDependientes, int sumaIndependientes) {
	if(sumaDependientes == sumaIndependientes)
		printf("Todo real es solución");
		
	if(sumaDependientes == 0 && sumaIndependientes != 0)
		printf("No tiene solución real");
		
	if(sumaDependientes != 0 && sumaIndependientes != 0) {
		simplicarFraccion(&sumaIndependientes, &sumaDependientes);
		(sumaIndependientes % sumaDependientes) ? printf("%d/%d", sumaIndependientes, sumaDependientes) : printf("%d", sumaIndependientes / sumaDependientes);
	}
}
