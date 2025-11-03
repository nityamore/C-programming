class Logic
{
    void sumEvenOddDigits(int n)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        
        
        

        while(n != 0)
        {
            iDigit = n % 10; 

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            n = n / 10;
        }

        System.out.println("Sum of even digits is "+iEvenSum);
        System.out.println("Sum of even digits is "+iOddSum);
    

        
       
    }
}
class program89
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);

    }
}