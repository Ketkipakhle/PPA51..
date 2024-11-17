
class ObjectDemo4
{
    public static void main(String a[])
    {
        try
        {
        Student sobj = new Student("Sagar",21,89);

        Student sobjX = (Student)sobj.Clone();

        System.out.println("name is : "+sobj.name);
        System.out.println("name is : "+sobj.Age);
        System.out.println("name is : "+sobj.Marks);

        System.out.println("name is : "+sobjX.name);
        System.out.println("name is : "+sobjX.Age);
        System.out.println("name is : "+sobjX.Marks);
    }
    catch(Exception obj)
    {}


    }
}
class Student implements Cloneable
{
    public String name;
    public int Age;
    public int Marks;

    public Student(String A,int B,int C)
    {
        this.name = A;
        this.Age = B;
        this.Marks = C;
    }
    public Object Clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
