#include<stdio.h>
#include<stdlib.h >

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iCountOdd++;
        }
    }
    return (iCountEven - iCountOdd);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    

    iRet = Frequency(p,iSize);
    printf("Difference is %d \n",iRet);

    free(p);
    return 0;
}