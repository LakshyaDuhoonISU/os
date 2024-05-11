#include<stdio.h>
//#include<sys/types.h>
//#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

int main() {
	int fd;
	fd=open("/file5.txt",O_RDONLY);
	if (fd==-1) {
		printf("\n open() was failed - errno = (%d)\n",errno);
		perror("ERROR:");
	}
	else {
		printf("\n open() system call executed successfully\n");
	}
	return 0;
}
