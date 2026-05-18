#include<stdio.h>

void Display(char str[])
{
    for( ;*str != '\0'; str++)      //1 condn is optional we didnt write it and keep it with space
    {
        printf("%c\n",*str);
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);

    return 0;
}