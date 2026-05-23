#include<stdio.h>
#include<stdbool.h>

bool CheckPalendrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = false;

    while(*end !='\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }

    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n'}s",Arr);

    bRet = CheckPalendrome(Arr);

    if(bRet == true)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }

    return 0;
}

//Time complexity O(n + n/2)