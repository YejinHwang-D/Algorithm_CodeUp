#include <stdio.h>

int main() {
    int current_x=2, current_y=2;
	int arr[11][11];
	
    for (int i=1; i<=10; i++)    //미로 상자
        for (int j=1; j<=10; j++) 
            scanf("%d", &arr[i][j]);


    while (1) {
        if (arr[current_x][current_y] == 2) {
            arr[current_x][current_y] = 9;
            break;
        }
        
        else if (arr[current_x][current_y+1] == 2) {
            arr[current_x][current_y] = arr[current_x][current_y+1] = 9;
            break;
        }
        
        else if (arr[current_x][current_y+1] == 0) {
            arr[current_x][current_y] = 9;
            current_y++;
        }
        
        else if (arr[current_x+1][current_y] == 2) {
            arr[current_x][current_y] = arr[current_x+1][current_y] = 9;
            break;
        }
        
        else if (arr[current_x+1][current_y] == 0) {
            arr[current_x][current_y] = 9;
            current_x++;
        }
        
        else {
            arr[current_x][current_y] = 9;
            break;
        }
    }



    for (int i=1; i<=10; i++) {    //미로 상자
        for (int j=1; j<=10; j++) 
            printf("%d ", arr[i][j]);
        printf("\n");
    }
	return 0;
}
