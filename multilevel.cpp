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

    class Derivedx:public Derived
    {
        public :
        int a,b;
        Derivedx()
        {
            cout<<"inside the Derivedx constructor\n";

        }
        ~Derivedx()
        {
            cout<<"insude the Derivedx destructor\n";
        }
        void sun()
        {
            cout<<"inside Derivedx sun\n";
        }


    }



};

int main()
{
  
    Derivedx dobj;
    //constructor -> base->derived->derivedx

    cout<<"inside main function\n";
    cout<<"sizeof of base class"<<sizeof(base)<<"\n";
    cout<<"sizeof of base class"<<sizeof(Derived)<<"\n";
    cout<<"sizeof of Derivedx class"<<sizeof(Derivedx)<<"\n";

///destructor -> derivedx->derived->base


    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    dobj.fun();
    dobj.Gun();
    d.obj.sun();





    return 0;
}