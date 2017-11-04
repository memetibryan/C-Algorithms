#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count_f = 0, count_p = 0;
	int result = 0;
	int i, std_num = 10;
	for(i=0; i<std_num; i++) {
		printf("Enter result: \t");
		scanf("%d",&result);
		if(result == 1) {
			count_p = count_p +=1;
		}
		else if (result == 2) {
			count_f = count_f +=1;
		}
		else {
			printf("Invalid input. Kindly enter 1 for pass or 2 for fail \n");
		}
		if (count_p >= 8) {
			printf("Bonus to the Instructor!!");
		}
	}
	printf("The number of students who passed is :t %d \n", count_p);
	printf("The number of students who failed is :t %d \n", count_f);
	return 0;
}
