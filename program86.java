class Logic
{
    void checkPrime(int num)
    {
        int i = 0;
        boolean isPrime = true;

        if(num <= 1)
        {
            System.out.println(num+ " is not a prime");
            return;
        }

        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            System.out.println(num+ " is a prime number");
        }
        else
        {
            System.out.println(num+ " is not a prime number");
        }
       
    }
}
class program86
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);

    }
}