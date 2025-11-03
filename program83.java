class Logic
{
    void findMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println(a+ " is greater than " +b);
        }
        else if(b > a)
        {
            System.out.println(b+ " is greater than " +a);
        }
        else
        {
            System.out.println("Both the numbers are equal");
        }
        
       
    }
}
class program83
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.findMax(20,15);

    }
}