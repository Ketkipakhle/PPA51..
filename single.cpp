#include<iostream>
using namespace std;
class base
{
    public:
    int i,j;

    base()
    {
        cout<<"inside base constructor\n";
        i=10;
        j=20;
    }
    ~base()
    {
        cout<<"inside base destructor\n";
    }
    void fun()
    {
        cout<<"inside base fun\n";
    }

};

class Derived :public base
{
    public :
    int x,y;
     Derived()
    {
        cout<<"inside Derived constructor\n";
        x=30;
        y=40;
    }
    ~Derived()
    {
        cout<<"inside Derived destructor\n";
    }
    void Gun()
    {
        cout<<"inside Derived Gun\n";
    }


};

int main()
{
  
    Derived dobj;

    cout<<"inside main function\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    dobj.fun();
    dobj.Gun();





    return 0;
}