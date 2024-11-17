
class ObjectDemo5
{
    public static void main(String a[])
    {
        Student sobj =new Student("Sagar",21,89);
        System.out.println(sobj);


    }
}
class Student 
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
    public String toString()
    {
        System.out.println("inside the toString method");
        return name+" "+Age+" "+Marks;
    }
}
    
