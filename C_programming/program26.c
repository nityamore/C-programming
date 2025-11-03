#include<stdio.h>

// Dynamic Function
void display(int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}



int main()
{
    int iCount = 0;
    printf("Enter the frequency :\n");
    scanf("%d",&iCount);

    display(iCount);    
    
    return 0;
}
