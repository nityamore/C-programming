class Logic
{
    void findSmallestDigit(int n)
    {
        int iDigit = 0;
        int iMin = 9;

        while(n != 0)
        {
            iDigit = n % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            n = n / 10;
        }
        System.out.println("The smallest digit is: "+iMin);
        


        
       
    }
}
class program100
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);

    }
}