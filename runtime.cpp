#include<iostream>
using namespace std;
class base
{
    public:
    int i,j;
    void fun()
    {
        cout<<"inside base fun\n";
    }
    void gun()
    {
        cout<<"inside base gun\n";
    }
    void sun()
    {
        cout<<"inside base sun\n";
    }
    void run()
    {
        cout<<"inside base run\n";
    }
};
class Derived:public base
{
    public:
    int x,y;
    void fun()
    {
        cout<<"inside derived fun\n";
    }
    void gun()
    {
        cout<<"inside derived gun\n";
    }
    void sun()
    {
        cout<<"inside derived sun\n";
    }
    void mun()
    {
        cout<<"inside derived mun\n";
    }

   
};

int main()
{
    

    Derived dobj;
    

    base *bptr=NULL;
    
    bptr=&dobj;
    bptr->fun();
    bptr->gun();
    bptr->sun();
    bptr->run();
   // bptr->mun();
    
    
    
    return 0;
}