class LoopDemo
{
    public static void main(String Args[])
    {
        int i= 0;
        System.out.println("Output by using for loop");
        for(i=0;i<=5;i++)
        System.out.println(i);

        System.out.println("Output by using for loop");
        i=1;
        while(i<=5)
        {
            System.out.println(i);
            i++;
        }

        i=1;
        do
        {
          System.out.println(i);  
          i++;

        }while(i<=5);

        


    }
}