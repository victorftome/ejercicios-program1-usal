#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hc1, hc2, mc1, mc2, sc1, sc2, hdif, mdif, sdif;
	int tiempoSegundosC1, tiempoSegundosC2, diferencia, salidaScanf;

	salidaScanf = scanf("%d %d %d\n%d %d %d", &hc1, &mc1, &sc1, &hc2, &mc2, &sc2);

	if (salidaScanf != 6)
		return 1;

	tiempoSegundosC1 = hc1 * 60 * 60 + mc1 * 60 + sc1;
	tiempoSegundosC2 = hc2 * 60 * 60 + mc2 * 60 + sc2;

	diferencia = abs(tiempoSegundosC1 - tiempoSegundosC2);

	sdif = diferencia % 60;
	mdif = diferencia / 60 % 60;
	hdif = diferencia / 60 / 60;

	printf("%dh %dm %ds", hdif, mdif, sdif);

	return 0;
}