#include<stdio.h>

void Table(int n)
{
    if(n < 0)
    {
        n = -n;
    }

    int i = 0;

    printf("Multiplication Table of %d:\n",n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i,n * i);
    }
   




}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}