class Overloading
{
    public static void main(String Arg[])
    {
        Arithematic aobj=new Arithematic();
        System.out.println(aobj.Addition(10,11));
         System.out.println(aobj.Addition(10,11,12));
          System.out.println(aobj.Addition(10.09f,11.99f));
    
    
    }

}
class Arithematic
{
    public int Addition(int A,int B)
    {
        return A+B;
    }

    public int Addition(int A,int B,int C)
    {
        return A+B+C;
    }

    public float Addition(float A,float B)
    {
        return A+B;
    }

}
