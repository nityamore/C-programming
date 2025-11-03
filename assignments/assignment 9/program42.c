#include<stdio.h>

int DollarToINR(int iNo)
{
    int rate = 70;

    return iNo * rate;
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);


    return 0;
}