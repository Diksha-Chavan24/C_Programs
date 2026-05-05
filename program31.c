#include<stdio.h>
#define ERR_INVALID -1

int Factorial(unsigned int iNo)
{
    int iCnt = 0; 
    unsigned long iFact = 1;
 
    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    iCnt = 1;
    while ( iCnt <= iNo )
    {
        unsigned long iFact = iFact * iCnt;
        iCnt++;
    }
    
    return iFact;
   
}

int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter the number : \n");
    scanf("%lu",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input");
    }
    else
    {
    printf("Factorial is : %d\n",iRet);
    }

    return 0;
}
