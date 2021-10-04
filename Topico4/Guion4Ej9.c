 #include <stdio.h>
 #include <limits.h>
 #include <locale.h>
 
 int main() {
 	setlocale(LC_ALL, "spanish");
 	
 	int n[3];
 	int i, j;
 	int menor = INT_MAX;
 	short iguales = 0;
 	
 	printf("Introduzca tres numeros enteros: ");
 	scanf("%d %d %d", &n[0], &n[1], &n[2]);
 	
 	for(i = 0; i < (sizeof n) / sizeof n[0]; i++) {
 		for(j = 0; j < i; j++) {
 			if(n[j] == n[i]) {
 				++iguales;
 				break;
			}
		}

		if(iguales) break;
 		if(menor > n[i]) menor = n[i];
	}
	
	if(iguales) printf("Hay numeros iguales, introduzca numeros diferentes");
	else printf("El numero mas pequeño es %d", menor);

 	return 0;
 }
