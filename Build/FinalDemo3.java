

class FinalDemo3
{
    public static void main(String Args[])
    {
        Demo dobj = new Demo(11);

        System.out.println("value of No1:"+dobj.No1);
                System.out.println("value of No2:"+dobj.No2);
                 dobj.No1++;


    }
}
class Demo 
{
    public int No1;
    final public int No2;

    public Demo(int A,int B)
    {
        No1=A;
    }
   
   // dobj.No2++;


}
