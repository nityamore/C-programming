class Logic
{
    void PrintTable(int num)
    {
        int i = 0;

       System.out.println("Multiplication table of " + num + ":");

        for(i = 1; i <= 10; i++)
        {
            System.out.println(num + " x " + i + " = " + (num * i));
        } 
       
    }
}
class program85
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.PrintTable(5);

    }
}