class Logic
{
    void countFactors(int n)
    {
       
       int iCnt = 0;
       int i = 0;

       if(n <= 0)
       {
        System.out.println("Please enter the positive number.");
        return;
       }

       for(i = 1; i <= n; i++)
       {
            if(n % i == 0)
            {
                iCnt++;
            }
       }
        System.out.println("Total number of factors of " + n + " are: " + iCnt);


    }
}
class program104    
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);

    }
}