class Logic
{
    void sumEvenNumbers(int n)
    {
        int i = 0;
        int iEvenSum = 0;

       

       
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                iEvenSum = iEvenSum + i;
            }
        }
        


        System.out.println("sum of even number is : "+iEvenSum);

        
       
    }
}
class program96
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);

    }
}