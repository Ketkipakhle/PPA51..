class ThreadDemo3
{
    public static void main(String Args[])
    {

        
        System.out.println("Inside main Thread");
        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
    }
}
class Demo implements Thread
{
    public void run()
    {
         System.out.println("Thread is running");
    }
}
