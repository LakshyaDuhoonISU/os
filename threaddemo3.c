#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

#define MAX 100

static void *threadFunc() {
	printf("ThreadFunc: function has started\n");
	while(1) {
		sleep(1);
		printf("ThreadFunc: thread is executing\n");
	}
}

int main() {
	pthread_t t1;
	int s=pthread_create(&t1,NULL,threadFunc,NULL);
	if (s!=0) 
		perror("Thread creation error");
	for (int i=0;i<10;i++) {
		sleep(2);
		printf("Main thread: executed (%d)\n",i);
	}
	pthread_exit(NULL);
	exit(0);
}
