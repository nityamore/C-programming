class Logic
{
    int findfactorial(int n)
    {
        int iFact = 1;
       

        for(int i = 1; i <= n; i++)
        {
            iFact = iFact * i;
        
        }
        return iFact;
    }
    

}

class program78
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        int iRet = obj.findfactorial(5);

        System.out.println("Factorial of 5 is :"+iRet);        
    }
}