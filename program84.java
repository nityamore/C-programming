class Logic
{
    void findMin(int a, int b, int c)
    {

        int min;

        if(a < b && a < c )
        {
            min = a;
        }
        else if(b < a && b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
        System.out.println("The smallest number is:" +min);
       
    }
}
class program84
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);

    }
}