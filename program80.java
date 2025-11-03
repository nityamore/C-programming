class Logic
{
    int CounDigits(int num)
    {
       
        int iCnt = 0;

        if(num < 0)
        {
            num = -num;
        }

        if(num == 0)
        {
            return 1;
        }

        while(num != 0)
        {
           iCnt++;
           num = num / 10;
        }
        return iCnt;
        

            
        
    }
    

}

class program80
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        int iRet = obj.CounDigits(5678);

        System.out.println("Number of digits are :"+iRet);

       
    }
}