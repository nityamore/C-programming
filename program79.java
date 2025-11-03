class Logic
{
    void ReverseNumber(int num)
    {
        int iRev = 0;
        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;
        }
        System.out.println("The reversed number is:"+iRev);

            
        
    }
    

}

class program79
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.ReverseNumber(1234);

       
    }
}