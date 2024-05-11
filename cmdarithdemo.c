#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc,char *argv[]) {
	if (strstr(argv[1],"add")) {
		printf("\n The addition of %s and %s is %d",argv[2],argv[3],atoi(argv[2])+atoi(argv[3]));
	}
	else if (strstr(argv[1],"sub")) {
		printf("\n The subtraction of %s and %s is %d",argv[2],argv[3],atoi(argv[2])-atoi(argv[3]));
	}
	else if (strstr(argv[1],"multi")) {
		printf("\n The multiplication of %s and %s is %d",argv[2],argv[3],atoi(argv[2])*atoi(argv[3]));
	}
	else if (strstr(argv[1],"div")) {
                printf("\n The division of %s and %s is %d",argv[2],argv[3],atoi(argv[2])/atoi(argv[3]));
       	}
	return 0;
}
