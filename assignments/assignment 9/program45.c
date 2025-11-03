#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int Evenfact = 1;
    int Oddfact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        if((iCnt % 2) == 0)
        {
            Evenfact *= iCnt;
        }
        else
        {
            Oddfact *= iCnt;

        }
        int diff = Evenfact - Oddfact;
    }

   
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd Factorial of number is %d",iRet);


    return 0;
}