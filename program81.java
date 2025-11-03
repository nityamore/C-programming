class Logic
{
    int SumofDigits(int num)
    {
       
        int iDigit = 0;
        int iSum = 0;

        if(num < 0)
        {
            num = -num;
        }

       

        while(num != 0)
        {
           iDigit = num % 10;
           iSum = iSum + iDigit;
           num = num / 10;
           
        }
        return iSum;
        

            
        
    }
    

}

class program81
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        int iRet = obj.SumofDigits(1234);

        System.out.println("Sum of digits are :"+iRet);

       
    }
}