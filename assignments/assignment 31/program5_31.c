/*
Accept number of rows and number of columns from user and display below pattern.

input : iRow = 6         iCol = 6

output:    1    2   3   4
                2   3   4
                    3   4
                        4
*/

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if( i <= j)
            {
                printf("%d\t",j);
            }
            else
            {
                 printf("\t");
            }
            
        }
        printf("\n");

    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows :");
    scanf("%d",&iValue1);

    printf("Enter the number of rows :");
    scanf("%d",&iValue2);

    printf("\n");

    pattern(iValue1,iValue2);

    return 0;

}