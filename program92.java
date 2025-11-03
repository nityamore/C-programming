class Logic
{
    void displayGrade(int marks)
    {
        if(marks >= 90)
        {
            System.out.println("grade is: A+");
        }
        else if(marks >= 80)
        {
            System.out.println("grade is: A");
        }
        else if(marks >= 70)
        {
            System.out.println("grade is: B");
        }
        else if(marks >= 60)
        {
            System.out.println("grade is: C");
        }
        else if(marks >= 50)
        {
            System.out.println("grade is: D");
        }
        else
        {
            System.out.println("grade is: F(fail)");
        }





        
       
    }
}
class program92
{
    public static void main(String Arr[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);

    }
}