#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int num)
{
    if(num > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number :\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(iValue > 100)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    


    return 0;
}