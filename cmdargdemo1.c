#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[]) {
	int count=0;
	printf("\n Demonstrate the process of command line argument");
	printf("\n The value of argc is %d",argc);
	while(count<argc) {
		printf("\n %d string is %s",count,argv[count]);
		count++;
	}
	return 0;
}
