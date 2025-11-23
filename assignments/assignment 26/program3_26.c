// Accept number of rows and number of column from user and display below pattern
/*
   input : 5
   output : 1 * 2 * 3 * 4 * 5 *
            1 2 3 4 5 6 7 8 9 0
*/ 

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
       if((i % 2) == 0)
       {
            printf("*\t");
       }
       else
       {
            printf("%d\t",((i / 2)+1),i);
       }

    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency :");
    scanf("%d",&iValue);

    


    Pattern(iValue);

    return 0;

}