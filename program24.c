#include<stdio.h>

void ChecknumberType(int num)
{
    if(num == 0)
    {
        printf("Number is zero");
    }
    else if(num > 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
}

int main()
{
    int number = 0;

    printf("Enter number :\n");
    scanf("%d",&number);

    ChecknumberType(number);
    
    return 0;
}