import java.util.*;
class Stack
{
    public static void main(String a[])
    {
        Stack <String> sobj = new Stack <String> ();
        sobj.push("c programming");
        sobj.push("c++ programming");
        sobj.push("Java programming");
        sobj.push("Python programming");

        System.out.println(sobj);

        String ret = sobj.pop();
        System.out.println(sobj);
    }
}