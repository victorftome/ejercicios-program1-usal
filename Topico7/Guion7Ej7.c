#include <stdio.h>

int main() {
	int var_a;
	int* p_var_a = NULL;
	
	printf("Introduzca el contenido de la variable var_a: ");
	scanf(" %d", &var_a);
	
	printf("El valor de la variable var_a leida desde la propia variable es: %d\n", var_a);
	
	p_var_a = &var_a;
	
	printf("El valor de la variable var_a leida desde el puntero p_var_a es: %d\n", *p_var_a);
	
	printf("Introduzca un nuevo valor para var_a, se guardara desde el puntero: ");
	scanf(" %d", p_var_a);
	
	printf("El valor de la variable var_a leida desde la propia variable es: %d\n", var_a);
	printf("El valor de la variable var_a leida desde el puntero p_var_a es: %d\n", *p_var_a);
	
	printf("La direccion de memoria de la variable var_a con el operador & es: %p\n", &var_a);
	printf("La direccion usando el punto es: %p\n", p_var_a);
	
	printf("La direccion del propio puntero es: %p\n", &p_var_a);
	printf("El contenido del puntero es: %p\n", p_var_a);

	return 0;
}
