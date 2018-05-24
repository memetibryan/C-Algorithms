#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
	int add = a + b;
	printf("%d",add);
	return add;
}

int main(int argc, char *argv[]){
	sum(45,4);
	return 0;
}


