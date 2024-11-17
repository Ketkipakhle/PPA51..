#include<iostream>
using namespace std;
class basee1
{
    public:
    int i,j;
    base1()
    {
        cout<<"inside base1 constructor\n";
        i=10;
        j=20;
       
    }
     void fun()
        {
            cout<<"inside fun of base1\n";
        }

};
class base2
{
    public:
    int x,y;
    base2()
    {cout<<"inside the base2 constructor\n";
    x=30;
    y=40;
}
    cout<<"inside the base2 constructor\n";
    x=30;
    y=40;

    void gun()
    {
        cout<<"inside gun base2\n";
    }

};
class derived : public base1, public base2
{
    int a,b;
    derived()
    {
        cout<<"inside the derived constructor\n";

    }
    ~derived()
    {
        cout<<"inside the destructor\n";

    }
    void sun()
    {
        cout<<"inside sun base2\n";
    }


}

int main()
{
    Derived dobj;

    cout<<sizeof(base1)<<"\n";
    cout<<sizeof(base2)<<"\n";
    cout<<sizeof(derived)<<"\n";


    return 0;
}