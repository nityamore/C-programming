#include<stdio.h>

int DisplayRangeRev(int iStart, int iEnd)
{
    int i = 0;

    for(i = iEnd; i >= iStart; i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point :");
    scanf("%d",&iValue1);

     printf("Enter Ending point :");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1,iValue2);

    return 0;
}