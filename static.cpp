#include<iostream>
using namespace std;
class Demo
{
    public:
    int i,j;
    static int k;
    Demo()
    {
        i=10;
        j=20;

    }
    void fun()
    {
        cout<<"inside non static fun\n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<k<<"\n";


    }
    static void gun()
    {
        cout<<"inside static gun\n";
        cout<<k<<"\n";

    }
    int Demo::k=30;
};
int main()
{
    cout<<"value of k is :"<<Demo::k<<"\n";
    Demo::gun();

    Demo obj1;
    Demo obj2;

    obj1.fun();
    obj1.fun();
    
    obj2.gun();
    obj2.gun();



    return 0;
}