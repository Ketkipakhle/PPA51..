#include<iostream>
using namespace std;
class base
{
    public:
    void fun()
    {
        cout<<"inside base fun\n";
    }

};
class Derived:public base{
    public:
    void fun() // re4ddefination
{
    cout<<"inside Derived fun\n";
}

 
};
int main()
{
    cout<<sizeof(base)<<"\n"; 

    base bobj;
    bobj.fun();
        
    Derived dobj;
    dobj.fun();
    
    return 0;
}