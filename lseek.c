#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main() {
	int sz,seek_pos=0;
	char buf[100],buf1[100];
	int fd=open("output.txt",O_RDWR);
	if (fd<0) {
		perror("Error occurred during open");
		exit(1);
	}
	/*
	seek_pos=lseek(fd,0,SEEK_SET);
	printf("\n Initial offset position : (%d)\n",seek_pos);

	seek_pos=lseek(fd,2,SEEK_SET);
	printf("\n Offset position : (%d)\n",seek_pos);

	seek_pos=lseek(fd,6,SEEK_SET);
	printf("\n Offset position : (%d)\n",seek_pos);

	sz=read(fd,buf,10);
	printf("\n Read bytes from file after lseek is = (%d)\n",sz);
	buf[sz]='\0';
	printf("Read bytes are as follows : \n%s\n",buf);
	*/
	int seek_pos1=lseek(fd,0,SEEK_END);
	seek_pos=lseek(fd,11,SEEK_SET);
	int size=(seek_pos1-seek_pos)+1;
	sz=read(fd,buf1,size);
	printf("\n Read bytes from file after lseek is = (%d)\n",sz);
	printf("%s",buf1);

	/*
	seek_pos=lseek(fd,0,SEEK_END);
	printf("\n Offset position after (SEEK_END + 0) : (%d)\n",seek_pos);

	strcpy(buf,"New string appeneded after seek end\n");
	sz=write(fd,buf,strlen(buf));
	*/

	close(fd);	

	return 0;
}
