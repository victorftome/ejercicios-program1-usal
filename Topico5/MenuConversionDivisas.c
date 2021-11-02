#include <stdio.h>
#include <ctype.h>
#include <locale.h>

// Se puso un espacio al empezar cada scanf
// para que no guardase en el buffer los \n
// ya que al haber datos en el buffer se saltaban scanf
// dandoles el valor que se encontraba en el buffer.

// Cuando se introducen varios caracteres en una scanf los guardara en el buffer haciendo
// que en posteriores scanf se usen los caracteres del buffer no funcionando correctamente el programa
// se pens� en hacer uso de fflush(stdin) pero se acabo limpiando el buffer
// usando un bucle

int main()
{
	setlocale(LC_ALL, "spanish");

	char opcion;
	float libras_euro, dolares_euro, importe;

	printf("======================================================================================================\n");
	printf("                                  CONVERSION DE DIVISAS\n");
	printf("======================================================================================================\n");

	do
	{
		printf("\n0) Introducir valores cotizaci�n divisas\n");
		printf("a) Convertir euros a d�lares y libras %s%s", (libras_euro && dolares_euro) ? "" : "(opci�n no disponible hasta la introducci�n de las cotizaciones)", "\n");
		printf("b) Convertir d�lares a euros y libras %s%s", (libras_euro && dolares_euro) ? "" : "(opci�n no disponible hasta la introducci�n de las cotizaciones)", "\n");
		printf("c) Convertir libras a euros y d�lares %s%s", (libras_euro && dolares_euro) ? "" : "(opci�n no disponible hasta la introducci�n de las cotizaciones)", "\n");
		printf("s) Salir\n");
		printf("Introduzca una opci�n: ");

		scanf(" %c", &opcion);

		while (getchar() != '\n'); // Limpiamos el buffer para evitar errores a la hora de que el usuario pueda introducir cadenas como "dabcs"

		switch (toupper(opcion))
		{
		case '0':
			printf("Introduzca cuantas libras son un euro: ");
			scanf(" %f", &libras_euro);

			while (getchar() != '\n')
				;

			printf("Introduzca cuantos d�lares son 1 euro: ");
			scanf(" %f", &dolares_euro);

			while (getchar() != '\n')
				;

			if (libras_euro <= 0 || dolares_euro <= 0)
			{
				libras_euro = 0;
				dolares_euro = 0;

				printf("La cotizaci�n introducida no es valida. No se tomaran los datos como validos.");
			}

			break;

		case 'A':
			if (!(libras_euro && dolares_euro))
			{
				printf("Para usar esta opci�n primero necesita introducir la cotizaci�n de las libras y los d�lares");
				break;
			}

			printf("Introduzca el importe en euros: ");
			scanf(" %f", &importe);

			while (getchar() != '\n')
				;

			printf("%f euros\n", importe);
			printf("%f libras (1 Euro = %f libras)\n", importe * libras_euro, libras_euro);
			printf("%f dolares (1 Euro = %f dolares)\n", importe * dolares_euro, dolares_euro);

			break;

		case 'B':
			if (!(libras_euro && dolares_euro))
			{
				printf("Para usar esta opci�n primero necesita introducir la cotizaci�n de las libras y los d�lares");
				break;
			}

			printf("Introduzca el importe en d�lares: ");
			scanf(" %f", &importe);

			while (getchar() != '\n')
				;

			printf("%f d�lares\n", importe);
			printf("%f euros (1 d�lar = %f euros)\n", importe / dolares_euro, 1 / dolares_euro);
			printf("%f libras (1 d�lar = %f libras)\n", importe / dolares_euro * libras_euro, 1 / dolares_euro * libras_euro);

			break;

		case 'C':
			if (!(libras_euro && dolares_euro))
			{
				printf("Para usar esta opci�n primero necesita introducir la cotizaci�n de las libras y los d�lares");
				break;
			}

			printf("Introduzca el importe en libras: ");
			scanf(" %f", &importe);

			while (getchar() != '\n')
				;

			printf("%f libras\n", importe);
			printf("%f euros (1 libra = %f euros)\n", importe / libras_euro, 1 / libras_euro);
			printf("%f d�lares (1 Libra = %f d�lares)\n", importe / libras_euro * dolares_euro, 1 / libras_euro * dolares_euro);

			break;

		case 'S':
			printf("Saliendo de la aplicaci�n...");
			break;

		default:
			printf("Opci�n incorrecta.");
		}

		printf("\nCuando quiera continuar pulse cualquier tecla...\n");

		system("pause");
		system("cls");
	} while (toupper(opcion) != 'S');

	return 0;
}
