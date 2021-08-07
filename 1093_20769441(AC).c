#include <stdio.h>

int main() {
	int n, num;
	int arr[23] = {};
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
	    scanf("%d", &num);
	    arr[num] = arr[num] + 1;
	}
	for (int i=1; i<=23; i++)
	    printf("%d ", arr[i]);
	return 0;
}
