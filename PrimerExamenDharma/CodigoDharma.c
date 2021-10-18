#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "spanish");
	int dharma, control, salidaScanf, n_entidad[4];
	int aux, i, suma = 0, control_calculado;
	
	salidaScanf = scanf("%d", &dharma);
	
	if(salidaScanf != 1)
		return 1;
		
	if(dharma < 10000 || dharma > 99999) {
		printf("C�digo Dharma no tiene 5 d�gitos");
		return 1;
	}
	
	control = dharma % 10;
		
	aux = dharma;
		
	for(i = 0; i < 4; i++) {
		aux /= 10;
		n_entidad[i] = aux % 10;
	}
		
	if(!(n_entidad[3] % 2)) {
		n_entidad[3] *= 4;
		n_entidad[2] *= 8;
		n_entidad[1] *= 5;
		n_entidad[0] *= 10;
	} else {
		n_entidad[3] *= 9;
		n_entidad[2] *= 7;
		n_entidad[1] *= 3;
		n_entidad[0] *= 6;
	}

	for(i = 0; i < 4; i++) {
		suma += n_entidad[i];
	}

	control_calculado = ((11 - suma % 11) != 10) ? 11 - suma % 11 : 1;
	
	printf("D�gito de control del c�digo Dharma........: %d\n", control);
	printf("D�gito de control calculado para la ENTIDAD: %d\n", control_calculado);
	
	if(control != control_calculado) printf("El c�digo Dharma NO es correcto");
	else printf("El c�digo Dharma es correcto");

	return 0;
}
