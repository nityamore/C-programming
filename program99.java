class Logic
{
    void findLargestDigit(int n)
    {
        int iDigit = 0;
        int iMax = 0;

        while(n != 0)
        {
            iDigit = n % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            n = n / 10;
        }
        System.out.println("The largest digit is: "+iMax);
        


        
       
    }
}
class program99
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);

    }
}