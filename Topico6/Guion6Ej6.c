#include <stdio.h>

#define MAX 100
#define MIN 1

int main() {
	int nums[MAX];
	int n_nums, i, dif, pos[2];

	do{
		printf("Introduzca los numeros a introducir (entre %d y %d incluidos): ", MIN, MAX);
		scanf(" %d", &n_nums);
	}while(n_nums < MIN || n_nums > MAX);

	for(i = 0, dif = 0; i < n_nums; i++) {
		do {
			printf("%d: Introduzca el numero(Mayor que el anterior): ", i + 1);
			scanf(" %d", &nums[i]);
		} while((i > 0) ? nums[i] <= nums[i-1] : 0);
		
		if((i > 0) ? (nums[i] - nums[i-1]) > dif : 0) {
			dif = nums[i] - nums[i-1];
			pos[0] = i-1;
			pos[1] = i;
		}
	}
	
	for(i = 0; i < n_nums; i++)
		printf("%d ", nums[i]);
		
	printf("\nLa maxima diferencia es de: %d entre %d y %d", dif, nums[pos[0]], nums[pos[1]]);

	return 0;
}
