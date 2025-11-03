class Logic
{
    void countEvenOddRange(int n)
    {
       int EvenCount = 0;
       int OddCount = 0;
       int i = 0;
        

        if(n < 0)
        {
            n = -n;
        }
        
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                EvenCount++;
            
            }
        
            else
            {
                OddCount++;
            }
        }

        System.out.println("Count of even numbers from 1 to "+n+"is : "+EvenCount);
        System.out.println("Count of odd numbers from 1 to "+n+"is : "+OddCount);

        


        
       
    }
}
class program102
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);

    }
}