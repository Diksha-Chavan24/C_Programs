///////////////////////////////////////////////////////
//
//  File name :     program82.c
//  Input :         4   #
//  Output :        # # # #
//  Input :         5   &
//  Output :        & & & & &
//  Input :         4   #
//  Output :        # # # #
//  Author :        Diksha Anil Chavan
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t ",ch);
    }
}
int main()
{
    int iValue = 0;
    char cValue = '\0'; 

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    printf("Accepted character is : %c\n",cValue);

    Display(iValue,cValue);

    return 0;
}

//Time complexity = O(N)
//N is natural number
//Where N >= 0 and N <= infinity