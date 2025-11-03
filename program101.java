class Logic
{
    void productofDigits(int num)
    {
       
        int iDigit = 0;
        int iProduct = 1;

        if(num < 0)
        {
            num = -num;
        }
        
        while(num != 0)
        {
            iDigit = num % 10;
            iProduct = iProduct * iDigit;
            num = num / 10;
        }

        System.out.println("Product of digits is: "+iProduct);


        
       
    }
}
class program101
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.productofDigits(234);

    }
}