import java.util.Scanner;
class ExceptionDemo6
{
    public static void main(String str)
    {
        int Age =0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your age:");
        Age = sobj.nextInt();
        try
        {
             System.out.println("Inside try");
             if(Age<18)
             {
                throw new AgeInvalidException("your age is less than 18");

             }

        }
        catch(AgeInvalidException obj)
        {
            System.out.println("Inside catch");
            System.out.println("obj");
            
            



        }
        finally
        {
            System.out.println("Inside finally");
            
        }
        System.out.println("End of Application");
            
    }

}

class AgeInvalidException extends Exception
{
    public static void main(String str)
    {
        super(str);
    }
}
