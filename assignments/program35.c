#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int iCnt = 0;

   printf("First 5 multiples of %d are :\n",iNo);

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        
        printf("%d\t",iNo * iCnt);
       
    }
    printf("\n");


}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


    return 0;
}