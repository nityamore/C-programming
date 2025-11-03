#include<stdio.h>

void print_factors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int number;

    printf("Enter number :");
    scanf("%d", &number);

    print_factors(number);


    return 0;
}