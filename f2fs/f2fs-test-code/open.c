#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int fd;
    char fname[256] = "";
    sprintf(fname, "%s", argv[1]);
    fd=open(fname ,O_CREAT,0777);
    printf("fd=%d\n",fd);
    return 0;
}
