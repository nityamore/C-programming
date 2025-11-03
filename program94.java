class Logic
{
    void printDigits(int num)
    {
        int iDigit = 0;

        if(num < 0)
        {
            num = -num;
        }

        System.out.println("Digits in "+num+" are :");

        while(num != 0)
        {
            iDigit = num % 10;
            System.out.println(iDigit);
            num = num / 10;
        }




        
       
    }
}
class program94
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);

    }
}