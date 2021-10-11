 #include <stdio.h>
 #include <limits.h>
 
 int main() {
 	int n[3];
 	int i, j, salidaScanf;
 	int menor = INT_MAX;
 	short iguales = 0;
 	
 	salidaScanf = scanf("%d %d %d", &n[0], &n[1], &n[2]);

 	if(salidaScanf != 3)
 		return 1;

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
	
	if(iguales) printf("No son diferentes");
	else printf("%d", menor);

 	return 0;
}
