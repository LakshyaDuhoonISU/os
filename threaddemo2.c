#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

static void *threadFunc(void *arg) {
        char *str=(char *)arg;
        printf("ThreadFunc: arguments passed to thread are: %s , pid = (%d)\n",str,getpid());
        (void)sleep(2);
        printf("\nThreadFunc: exiting now\n");
        return(0);
}

int main(int argc,char *argv[]) {
        pthread_t t1;
        void *res;
        int s;

        s=pthread_create(&t1,NULL,threadFunc,"Hello World");
        if (s!=0)
                perror("Thread create error");
        printf("main thread: Message from main() , pid = (%d)\n",getpid());
        

        sleep(15);
        printf("main thread: exiting now\n");

        exit(0);

        return 0;
}
