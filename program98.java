class Logic
{
    void checkPerfect(int n)
    {
        int iSum = 0;
        int i = 0;

        System.out.println("Numbers in reverse from "+n+" to 1 are :");
        

       for(i = 1; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == n)
        {
            System.out.println(n+ " is a perfect number");
        }
        else
        {
            System.out.println(n+ " is NOT a perfect number");
        }
        


        
       
    }
}
class program98
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);

    }
}