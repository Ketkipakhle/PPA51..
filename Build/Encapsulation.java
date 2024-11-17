

class Encapsulation

{
        public static void main(String Args[])

     {
        System.out.println("inside main function");

        Arithematic aobj= new Arithematic();
        Arithematic aobj1=new Arithematic(11,10);

        int ret = 0;

        ret = aobj1.Addition();
        System.out.println("Addition is :"+ret);

        ret = aobj1.Substraction();
        System.out.println("Substraction is :"+ret);

    }

        
}
class Arithematic

{
    public int No1;
    public int No2;

    public Arithematic()
    {
        System.out.println("inside the default constructor");
        this.No1=0;
        this.No2=0;
    }
     public Arithematic(int A,int B)
    {
        System.out.println("inside the parameterised constructor");
        this.No1=A;
        this.No2=B;
    }
    public int Addition()
    {

         int Ans=0;
         Ans=this.No1+this.No2;
         return Ans;
        
    }
    public int Substraction()
    {

         int Ans=0;
         Ans=this.No1-this.No2;
         return Ans;
        
    }
}

