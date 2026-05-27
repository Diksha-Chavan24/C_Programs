#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written successfully \n",iRet);

        close(fd);
    }

    return 0;
}