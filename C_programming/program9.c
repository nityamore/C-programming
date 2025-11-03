/*
   Step 1 : understand the problem statement
   Step 2 : write the algorithm
   Step 3 : Decide the programming language
   Step 4 : write the program
   Step 5 : test the program

*/
/*
   Algorithm

   START
       Accept first number as no1
       Accept first number as no2
       if the input is negative the convert it into positive
       Perform the addtion of no1&no2
       Display the addition on screen
   STOP
*/
#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    // Updater
    if(fNo1<0.0f) 
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                //business logic
    
    return fSum;
}


int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("enter first number :\n");
    scanf("%f",&fValue1);

    printf("enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

     printf("Addition is :%f\n",fRet);
    


    return 0;
}