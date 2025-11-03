#include<stdio.h>

int FindLargest(int x,int y,int z)
{
    if(x >= y && x >= z)
    {
        return x;
    }
    else if(y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int num1, num2, num3, result;

    printf("Enter three numbers :\n");
    scanf("%d %d %d",&num1, &num2, &num3);

    result = FindLargest(num1, num2, num3);
    printf("Largest number is: %d\n",result);
    
    return 0;
}