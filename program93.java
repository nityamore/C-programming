class Logic
{
    void CheckDivisible(int num)
    {
        if((num % 5 == 0) && (num % 11 == 0))
        {
            System.out.println(num+ "is divisible by both 5 and 11");
        }
        else if(num % 5 == 0)
        {
            System.out.println(num+ "is divisible by 5");
        }
        else if(num % 11 == 0)
        {
            System.out.println(num+ "is divisible by 11");
        }
        else
        {
            System.out.println("it is neither divisible by 5 nor 11");
        }





        
       
    }
}
class program93
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);

    }
}