class Logic
{
    void printReverse(int n)
    {
        int i = 0;

        System.out.println("Numbers in reverse from "+n+" to 1 are :");
        

       for(i = n; i >= 1; i--)
        {
            System.out.println(i);
        }
        


        
       
    }
}
class program97
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);

    }
}