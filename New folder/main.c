#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Emp {
	int eno;
	char ename[7];
	double esalary;
};

int main(int argc, char *argv[]){
	struct Emp e;
	e.eno = 5435993;
	strcpy(e.ename, "Ahmed");
	e.esalary = 500000;
	printf("%d%s%f", e.eno, e.ename, e.esalary);
};
