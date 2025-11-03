#include<stdio.h>
#include<stdbool.h>

bool ChkEquals(int num1, int num2)
{
    if(num1 == num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Please enter number :\n");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEquals(iValue1,iValue2);

    if(iValue1 == iValue2)
    {
        printf("It is equal");
    }
    else
    {
        printf("It is not equal");
    }
    


    return 0;
}