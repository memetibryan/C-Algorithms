#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100], size, i;
	char *names[100];
	int count = 0, index = 0;	
	printf("How many students do you want to record? \n");
	printf("(Not less than 8 students) \n");
	scanf("%d", &size);	
	printf("Enter grades for the entered \n");
	printf("number of students \n");
	printf("N/B:- Input (1) for a pass and (2) for fail. \n");
	for (i=0; i<size; i++) {
		printf("Enter result \n");
		scanf("%d", &arr[i]);
		if (arr[i] == 1) {
			count++;				
		}
		else if (arr[i] == 2) {
			index++;				
		}
		else {
			printf("Wrong!!, Kindly put a (1) for pass and a (2) for fail \n");
		}
	}
	printf("Candidates who passed %d \n", count);
	printf("Candidates who failed %d \n\n", index);
	if (count >= 8) {
		printf("Bonus to Instructor!!!");
	}
	return 0;
}
