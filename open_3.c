#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

void main() {
        int fd;
        fd=open("newFile2.log",O_RDWR|O_CREAT|O_EXCL);
        if (fd==-1) {
                printf("\n open() was failed - errno = (%d)\n",errno);
                perror("ERROR:");
        }
        else {
                printf("\n open() system call executed successfully\n");
        }
}
