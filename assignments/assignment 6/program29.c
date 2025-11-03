#include<stdio.h>


int Multiply(int a, int b, int c)
{
     int product = a*b*c;

    if(product == 0)
    {
        printf("the product is zero.\n");
    }
    else
    {
        printf("Product of three numbers is :%d\n",product);
       
        return product;
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Please enter number :\n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    


    return 0;
}