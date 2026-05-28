#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()      //modern operating systems by achut godbole  // operating system by tanin burg
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[1024] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);      

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,size(Buffer))) != 0)
        {
            //printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',size(Buffer));
        }

        close(fd);
    }

    return 0;
}