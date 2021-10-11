#include <stdio.h>

int main() {
	int suma = 0, sobresalientes = 0, notables = 0, aprobados = 0, suspensos = 0, deficientes = 0, total = 1;
	float n = 0.0;

	while(n >= 0) {
		printf("Introduzca una nota: ");
		scanf("%f", &n);
		
		if(n >= 0) {
			sobresalientes += (n >= 9) ? 1 : 0;
			notables += (n >= 7 && n < 9) ? 1 : 0;
			aprobados += (n >= 5 && n < 7) ? 1 : 0;
			suspensos += (n >= 2 && n < 5) ? 1 : 0;
			deficientes += (n < 2) ? 1 : 0;
			
			suma += n;
		}
	}
	
	total = sobresalientes + notables + aprobados + suspensos + deficientes;
	
	printf("Total alumnos presentados: %d", total);
	printf("\nNumero de sobresalientes: %d (%.2f%%)", sobresalientes, (float) sobresalientes / total * 100);
	printf("\nNumero de notables: %d (%.2f%%)", notables, (float) notables / total * 100);
	printf("\nNumero de aprobados: %d (%.2f%%)", aprobados, (float) aprobados / total * 100);
	printf("\nNumero de suspensos: %d (%.2f%%)", suspensos, (float) suspensos / total * 100);
	printf("\nNumero de deficientes: %d (%.2f%%)", deficientes, (float) deficientes / total * 100);
	printf("\nNota media: %.2f", (float) suma / total);

	return 0;
}
