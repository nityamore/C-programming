class Logic
{
    void printOddNumber(int n)
    {
        int i = 0;
        
        System.out.println("The even numbers up to" +n+ "are :");
        

        for(i = 1; i <= n ; i++)
        {
            if(i % 2 != 0)
            {
                System.out.println(i);
            }
        }

        
       
    }
}
class program88
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.printOddNumber(20);

    }
}