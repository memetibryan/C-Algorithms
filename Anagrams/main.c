#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *arr[100];
	int i;
	int words = 2;
	printf("Enter two words and I will tell you if they are Anagrams \n");
	for (i=1; i<=2; i++) {
		printf("Enter word \n");
	    scanf("%char", &arr[i]);
	}
	for (i=1; i<=2; i++) {
		printf("%char \n",arr[i]);
	}
	return 0;
}
