#include <stdio.h>

int main() {
	int max, sum, i=0;
	scanf("%d", &max);
	while (sum < max) {
	    sum += ++i;
	}
	printf("%d", i);
	return 0;
}
