#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int i = 0;
    int sum = 0;

    for(i = iStart; i <= iEnd; i++)
    {
        if((i % 2) == 0)
        {
            sum += i;
        }    
       
        
    }
    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point :");
    scanf("%d", &iValue1);

    printf("Enter Ending point :");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition of even number in Range = %d\n",iRet);

    return 0;
}