class Logic
{
    int CalculateSum(int n)
    {
        int iSum = 0;
       

        for(int i = 1; i <= n; i++)
        {
            iSum = iSum + i;
        
        }
        return iSum;
    }
    

}

class program76
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        int iRet = obj.CalculateSum(10);

        System.out.println("Sum of first  10 Natural number is :"+iRet);        
    }
}