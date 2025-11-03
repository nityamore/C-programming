#include<stdio.h>

int main()
{
   int iValue = 11;
   char cValue = 'M';

   int *iptr = &iValue;
   char *cptr = &cValue;

   
   printf("size0f iptr : %lu\n",sizeof(iptr));
   printf("size0f cptr : %lu\n",sizeof(cptr));




    return 0;
}