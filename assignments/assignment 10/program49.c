#include<stdio.h>

double FhToCs(float fTemp)
{
    return (fTemp - 32) * 5/9;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Farhenreit :");
    scanf("%d",&fValue);

    dRet = FhToCs(fValue);

    printf("%lf",dRet);

    return 0;
}