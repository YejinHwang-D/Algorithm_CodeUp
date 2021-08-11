#include <stdio.h>

int main() {
    int i, n, k, arr[10000];
	scanf("%d", &n);
	for (i=0; i<n; i++) {
	    scanf("%d", &k);
	    arr[i] = k;
	}
	for (i=n-1; i>=0; i--)
	    printf("%d ", arr[i]);
	
	return 0;
}
