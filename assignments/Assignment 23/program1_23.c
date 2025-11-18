#include<stdio.h>
#include<stdlib.h >
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

     for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 66)
        {
            iCount++;
            break;
        }
    }
    return iCount;
    

}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
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

    

    bRet = Check(p,iSize);
    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(p);
    return 0;
}