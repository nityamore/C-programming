
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
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Nitya Rajesh More
//  Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                               float fNo1,                              // First input 
                               float fNo2                               // Second input
                            )
{
    float fSum = 0.0f;                                                  // To store the result

    if(fNo1<0.0f)                                                       // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)                                                       // Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                                 //business logic
    
    return fSum;
}   // End of AdditionTwoNumbers 

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;                               // To accept user input
    fRet = 0.0f;                                                        // To store the result

    printf("enter first number :\n");
    scanf("%f",&fValue1);

    printf("enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);                         // Method call

     printf("Addition is :%f\n",fRet);
    


    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successsfully handled by the application
//
//  Input1 : 10.5           Input2 : 3.2            Output : 13.7
//  Input1 : 10.5           Input2 : -3.2           Output : 13.7
//  Input1 : -10.5          Input2 : 3.2            Output : 13.7
//  Input1 : -10.5          Input2 : -3.2           Output : 13.7
//  Input1 : 10.5           Input2 : 0.0            Output : 10.5
//
//////////////////////////////////////////////////////////////////////////////////////////////////////