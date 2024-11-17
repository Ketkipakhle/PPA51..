
class Singlelevel
{
    public static void main(String Args[])

    {
        System.out.println("inside main function");

        Derived dobj =new Derived();
        dobj.fun();
        dobj.gun();
       


    

    }
}
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Inside Base constructor");
    }
     public void fun()
    {
        System.out.println("Inside Base fun");
    }


}
class Derived extends Base
{
    public  int x,y;
    public Derived()
    {
        System.out.println("Inside Derived constructor");
    }
     public void gun()
    {
        System.out.println("Inside Base gun");
    }

}
