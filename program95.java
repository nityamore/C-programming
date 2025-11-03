class Logic
{
    void calculatePower(int base, int exp)
    {
        int i = 0;
        int iResult = 1;

       

       
        for(i = 1; i <= exp; i++)
        {
            iResult = iResult * base;
        }


        System.out.println(base+ " is raised to the power "+exp+" is "+iResult);

        
       
    }
}
class program95
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);

    }
}