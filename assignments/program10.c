#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    int iRem = 0;

    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    printf("Result is :%d\n",bRet);


    return 0;
}