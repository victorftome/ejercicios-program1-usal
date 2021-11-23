#include <stdio.h>
#include <stdlib.h>

typedef struct numeros {
	char num;
	struct numeros *siguiente;
} numero;

void insertarNumero(int num, numero** inicial, unsigned long long int* contador);
void mostrar(numero** inicial);
void realizar_suma(numero** primer_sumando, numero** segundo_sumando, numero** resultado);
void leerNumeros(numero** primer_numero, numero** segundo_numero, unsigned long long int* contadores);
void limpiarMemoria(numero** inicial);

int main() {
	numero* primer_numero = NULL;
	numero* segundo_numero = NULL;
	numero* resultado = NULL;
	
	unsigned long long int numeros_elementos[2];
	
	numeros_elementos[0] = 0;
	numeros_elementos[1] = 0;

	leerNumeros(&primer_numero, &segundo_numero, numeros_elementos);
	
	if(numeros_elementos[0] >= numeros_elementos[1])
		realizar_suma(&primer_numero, &segundo_numero, &resultado);
	else
		realizar_suma(&segundo_numero, &primer_numero, &resultado);
		
	mostrar(&resultado);
	
	limpiarMemoria(&primer_numero);
	limpiarMemoria(&segundo_numero);
	limpiarMemoria(&resultado);
	
	return 0;
}

void insertarNumero(int num, numero** inicial, unsigned long long int* contador) {
	numero* nuevo_numero = (numero* ) malloc(sizeof(numero));

	nuevo_numero->siguiente = NULL;
	nuevo_numero->num = num;

	nuevo_numero->siguiente = *inicial;
	*inicial = nuevo_numero;
	
	if(contador != NULL) ++*contador;
}

void mostrar(numero** inicial) {
	numero* index = *inicial;
	
	while(index != NULL) {
		printf("%d", index->num);
		index = index->siguiente;
	}
}

void realizar_suma(numero** primer_sumando, numero** segundo_sumando, numero** resultado) {
	numero* index = *primer_sumando;
	numero* index2 = *segundo_sumando;
	
	char acarreo = 0, temp;
	
	while(index2 != NULL) {
		temp = index->num + index2->num + acarreo;
		
		if(temp >= 10) {
			temp %= 10;
			acarreo = 1;
		} else 
			acarreo = 0;

		insertarNumero(temp, resultado, NULL);
		
		index = index->siguiente;
		index2 = index2->siguiente;
	}

	while(index != NULL) {
		insertarNumero(index->num + acarreo, resultado, NULL);
		index = index->siguiente;
		acarreo = 0;
	}
	
	if(acarreo) insertarNumero(acarreo, resultado, NULL);
}

void leerNumeros(numero** primer_numero, numero** segundo_numero, unsigned long long int* contadores) {
	int i;
	char flag = 0, s;
	
	while(s != '\n' && s != EOF){
		scanf("%1c", &s);
		
		if(s == ' ') {
			flag = 1;
			++contadores;
			continue;
		}
			
		if(!flag) {
			insertarNumero(atoi(&s), primer_numero, contadores);
			continue;
		}
		
		if(s != '\n' && s != EOF)
			insertarNumero(atoi(&s), segundo_numero, contadores);	
	}
}

void limpiarMemoria(numero** inicial) {	
	numero* index = NULL;

	while(*inicial != NULL) {
		index = *inicial;
		*inicial = (*inicial)->siguiente;
		free(index);
	}
}
