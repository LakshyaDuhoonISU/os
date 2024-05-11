#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

void main() {
int sz;
char buf[100];
strcpy(buf,"This is example of O_TRUNC: Sample file write 2 using append flag\n");
int fd=open("output.txt",O_WRONLY|O_TRUNC);
/* O_TRUNC => write to file from beginning, discarding old contents*/
/*O_APPEND => write the contents of file from the end of existing file contents*/
if (fd<0) {
perror("Error occured during open");
exit(1);
}
printf("Length of buf is (%d)",(int)strlen(buf));
sz=write(fd,buf,strlen(buf));
printf("\n write() returned %d\n",sz);
close(fd);
}
