#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main() {
        printf("\n Process ID is %d \n",getpid());
        printf("\n Parent Process ID is %d \n",getppid());
        sleep(5);
        return 0;
}
