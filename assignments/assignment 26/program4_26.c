// Accept number of rows and number of column from user and display below pattern
/*
   input : 5
   output : #   1   *   #   2  *    #   3   *   #   4   *   

*/ 

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t" "%d\t"  "*\t",i);
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