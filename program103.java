class Logic
{
    void displayFactors(int n)
    {
       
       int i = 0;

       if(n <= 0)
       {
            System.out.println("Please enter a positive number: ");
            return;
       }

       System.out.println("Factors of " + n + " are:");

       for(i = 1; i <= n; i++)
       {
            if(n % i == 0)
            {
                System.out.println(i);
            }
       }

    }
}
class program103
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);

    }
}