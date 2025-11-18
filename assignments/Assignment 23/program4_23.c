#include<stdio.h>
#include<stdlib.h >


int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0, iCount = 0;

     for(iCnt = iStart; iCnt < iEnd; iCnt++)
    {
        if(iCnt > iStart && iCnt < iEnd)
        {
            printf("%d",iCnt);
            
        }

    }
   


}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the starting point");
    scanf("%d",&iValue1);

     printf("Enter the ending point");
    scanf("%d",&iValue2);

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

    iRet = Range(p, iSize, iValue1, iValue2);
    printf("thr range is %d",iValue1,iValue2,iRet);
    
    

    free(p);
    return 0;
}