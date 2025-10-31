#include<stdio.h>

int main()
{
    int i = 0, j = 0, ans = 0;

    printf("enter first number :\n");
    scanf("%d",&i);

    printf("enter second number :\n");
    scanf("%d",&j);

    ans = i + j;                       //business logic

    printf("Addition is :%d\n",ans);
    


    return 0;
}