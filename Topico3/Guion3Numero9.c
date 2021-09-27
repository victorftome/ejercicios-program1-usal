// Ejercicio Guion 3 Numero 9

#include <stdio.h>
#include <math.h>

int main() {
	int hc1, hc2, mc1, mc2, sc1, sc2, hdif, mdif, sdif;
	int tiempoSegundosC1, tiempoSegundosC2, diferencia;
	
	printf("Distancia en tiempo entre dos corredores\n");
	printf("=============================================\n");
	printf("Introduzca el tiempo del primer corredor: ");
	
	scanf("%d %d %d", &hc1, &mc1, &sc1);
	
	printf("Horas.......: %d\n", hc1);
	printf("Minutos.....: %d\n", mc1);
	printf("Segundos....: %d\n", sc1);
	
	printf("Introduzca el tiempo del segundo corredor: ");
	
	scanf("%d %d %d", &hc2, &mc2, &sc2);
	
	printf("Horas.......: %d\n", hc2);
	printf("Minutos.....: %d\n", mc2);
	printf("Segundos....: %d\n", sc2);
	
	tiempoSegundosC1 = hc1 * 60 * 60 + mc1 * 60 + sc1;
	tiempoSegundosC2 = hc2 * 60 * 60 + mc2 * 60 + sc2;
	
	// Se hace el valor absoluto ya que si el segundo corredor
	// ha hecho mayor tiempo que el primero saldria negativo
	diferencia = abs(tiempoSegundosC1 - tiempoSegundosC2);
	
	sdif = diferencia % 60;
	mdif = diferencia / 60 % 60;
	hdif = diferencia / 60 / 60;
	
	printf("\nLa distancia entre ambos corredores es de: ");
	printf("\n%d horas, %d minutos y %d segundos", hdif, mdif, sdif);
	
	return 0;
}
