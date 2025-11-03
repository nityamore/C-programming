#include<stdio.h>

double KMToMeter(int iNo)
{
    return iNo * 1000;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("%d",iRet);

    return 0;
}