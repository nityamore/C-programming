class Logic
{
    void CheckSign(int n)
    {
        
        if(n > 0)
        {
            System.out.println(n+ " is positive number");
        }
        else if(n < 0)
        {
            System.out.println(n+ " is negative number");
        }
        else
        {
            System.out.println("number is zero");
        }

        
       
    }
}
class program90
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.CheckSign(-7);

    }
}