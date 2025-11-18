#include<stdio.h>
#include<stdlib.h >


int Product(int Arr[], int iLength)
{
    int iCnt = 0, iOdd = 0, iMult = 1;

     for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iMult = iMult * Arr[iCnt];
            
        }

    }
    return iMult;
   


}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);


    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iSize);
    printf("product is %d",iRet);
    
    

    free(p);
    return 0;
}