
class Hierarchical
{
    public static void main(String Args[])

    {
        System.out.println("inside main function");

        Derived dobj1 =new Derived();
        Derivedx dobj2 =new Derivedx();
        dobj1.fun();
        dobj1.gun();

        dobj2.fun();
        dobj2.sun();
    

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
class Derivedx extends Base
{
    public int i,j;
    
    public Derivedx()
    {
        System.out.println("Inside Derivedx constructor");
    }
     public void sun()
    {
        System.out.println("Inside Base sun");
    }

}
