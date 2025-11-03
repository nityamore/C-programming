#include<stdio.h>

void CheckEvenOdd(int iNum)
{
    int iRem = 0;

    iRem = iNum % 2;

    if(iRem == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}

int main()
{
    int number;

    printf("Enter number :\n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}