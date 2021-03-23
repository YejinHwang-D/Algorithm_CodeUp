#include <stdio.h>

int main() {
	char data[2001];
    scanf("%[^\n]", data);
    printf("%s", data);
	return 0;
}
