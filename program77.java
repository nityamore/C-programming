class Logic
{
    boolean CheckEvenOdd(int num)
    {
            if((num % 2) == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        
        
        
    }
    

}

class program77
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        boolean bRet = obj.CheckEvenOdd(7);

        if(bRet)
        {
            System.out.println("7 is even");
        }               
        else
        {
            System.out.println("7 is odd");
        }
    }
}