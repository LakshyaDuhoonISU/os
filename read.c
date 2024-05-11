i#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main() {
int fd,sz;
char buf[20]={0};
fd = open("open_1.c",O_RDONLY);
if (fd<0) {
perror("Error:");
exit(1);
}
sz=read(fd,buf,10);
printf("call 1 - called read. fd = %d, %d bytes were read.\n",fd,sz);
buf[sz]='\0';
printf("Read bytes are as follows: \n<%s>\n",buf);
printf("\n Note the next set of bytes read from file, it is continous\n");
sz=read(fd,buf,11);
printf("call 2 - called read. fd= %d, %d bytes were read.\n",fd,sz);
buf[sz]='\0';
printf("Read bytes are as follows:\n<%s>\n",buf);
sz=read(fd,buf,10);
printf("call 3 - called read. fd = %d, %d bytes were read.\n",fd,sz);
if (sz==0) {
printf("EOF Reached\n");
}
close(fd);
}

