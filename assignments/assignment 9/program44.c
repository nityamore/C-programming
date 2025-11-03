#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int fact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        fact *= iCnt;
    }
    return fact;
   
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);


    return 0;
}