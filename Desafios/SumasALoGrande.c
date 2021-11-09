#include <stdio.h>
#include <ctype.h>

#define SIZE 1000

int main() {
	
	int i = 0, index;
	int num[1000];
	
	int *p, *q;
    while (fgets(num, SIZE, stdin))
    {
        p = num;
        while (*p)
        {
            while (*p && isspace(*p)) p++;
            q = p;
            while (*q && !isspace(*q)) q++;
            *q = '\0';
            if (p != q)
                puts(p);
            p = q;
        }
        
        break;
    }
	
	for(i = 0; i < SIZE; i++) {
		printf("%d\n", num[i]);
	}
}
