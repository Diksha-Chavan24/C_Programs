///////////////////////////////////////////////////////
//
//  File name :     program75.c
//  Descreption :   Used to accept number and print * of that frequency
//  Input :         4
//  Output :        * * * *
//  Author :        Diksha Anil Chavan
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept the frequency
        Iterate from 1 to that frequency
            Dispaly * on screen
        continue
    Stop
*/
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
        printf("*\t");
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