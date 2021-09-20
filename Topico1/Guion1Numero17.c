#include <stdio.h>

/*
	Programa para calcular la suma de los numeros pares entre dos numeros introducidos
	En mi caso he interpretado que los numeros en ambos limites tambien se cuenten. No se si sera correcto.
*/

int main()
{
	int x, y, i;   // Declaramos las vriables a usar. X para el numero 1. Y para el segundo. Y i el contador.
	long suma = 0; // Se opto por usar un long ya que se pueden generar numeros de gran tama�o. Se inicializa a 0.

	printf("Introduzca dos numeros enteros (El primero mayor que el segundo): "); // Mensaje informativo para el usuario
	scanf("%d %d", &x, &y);														  // Se piden los numeros por teclado

	// El bucle donde se realizara la suma. se comprobada con un operador ternario que el valor
	// menor es par. En caso de serlo simplemente se le asignara. En caso contrario se le sumara 1 para que lo sea
	// y se le asignara al contador. El cual en vez de ir incrementando de 1 en 1 lo hara de 2 en 2 para asegurar que
	// siempre sea par.
	for (i = (y % 2 == 0 ? y : y + 1); i <= x; i += 2)
	{
		suma += i;
	}

	// Imprimimos el resultado de la suma
	// En caso de haber introducido mal los numero y que el primero sea menor al segundo simplemente imprimira 0
	// ya que no se ejecuta ninguna iteraci�n del bucle for.
	// Se podria haber puesto un if alrededor del for y el print y asi no se imprimiria ningun dato
	// he decidido no hacerlo para solo hacer uso de un bucle. No se si estara correcto respecto a lo que se pedia en el enunciado
	printf("%d", suma);

	return 0;
}
