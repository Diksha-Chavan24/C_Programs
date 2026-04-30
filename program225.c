#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd = 0;     //file descriptor

    fd = creat("Demo.txt",0777);

    return 0;
}

//man creat --- for cmd in linux system