#include<stdio.h>


float Percentage(float a,float b)
{
    float Percentage = 0.0;

    if(Percentage != 0)
    {
        printf("total marks cannot be zero.\n");
    }
    
    Percentage = (a/b) * 100;
    printf("Percentage is: %.2f%%\n",Percentage);
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks :\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);



    return 0;
}