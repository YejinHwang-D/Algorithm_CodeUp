#include <stdio.h>

int main() {
	int n, x, y, arr[20][20]={0,};
	scanf("%d", &n);
	
	for (int i=0; i<n; i++) {    //그냥 n번 반복하라는거
	    scanf("%d %d", &x, &y);
	    arr[x][y] = 1;
	}
	
	for (int i=1; i<=19; i++) {
	    for (int j=1; j<=19; j++)
	        printf("%d ", arr[i][j]);
	    printf("\n");
	}
	return 0;
}
