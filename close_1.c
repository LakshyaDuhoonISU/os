#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    int fd = open("open_1.c", O_RDONLY);
    if (fd < 0) {
        perror("c1");
        exit(1);
    }
    printf("opened the fd = %d\n", fd);
    if (close(fd) < 0) {
        perror("C1");
        exit(1);
    }
    printf("closed the fd\n");
fd=open("open_2.c",O_RDONLY);
printf("fd %d\n",fd);
    return 0;
}
