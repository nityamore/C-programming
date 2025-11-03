class Logic
{
    void CheckPalindrome(int num)
    {
        int temp = num;
        int iDigit = 0;
        int iRev = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;
        }

        if(temp == iRev)
        {
            System.out.println(temp+ "is a Palindrome number");
        }
        else
        {
            System.out.println(temp+ "is not a Palindrome number");
        }
       
    }
}
class program82
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.CheckPalindrome(121);

    }
}