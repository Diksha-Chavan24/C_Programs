//This program doesn't work when we give space 
//It only worls for Single word

#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your Name :\n");
    scanf("%s", Arr);

    printf("Your name is : %s\n",Arr);

    return 0;
}