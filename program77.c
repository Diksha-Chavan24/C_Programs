///////////////////////////////////////////////////////
//
//  File name :     program77.c
//  Input :         4
//  Output :        1 2 3 4
//  Author :        Diksha Anil Chavan
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time complexity = O(N)
//N is natural number
//Where N >= 0 and N <= infinity