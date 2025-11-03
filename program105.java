class Logic
{
    void printDivisibleBy2and3(int n)
    {
       
       
       int i = 0;

       if(n <= 0)
        {
            System.out.println("Please enter a positive number.");
            return;
        }

        System.out.println("Numbers divisible by both 2 and 3 up to " + n + " are:");

        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0 && i % 3 == 0)
            {
                System.out.println(i);
            }
        }
        


    }
}
class program105   
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);

    }
}