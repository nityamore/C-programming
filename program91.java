class Logic
{
    void CheckLeapYear(int n)
    {
        if((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
        {
            System.out.println(n+ " is a LEAP year");
        }
        else
        {
            System.out.println(n+ " is not a LEAP year");
        }

        
       
    }
}
class program91
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.CheckLeapYear(2024);

    }
}