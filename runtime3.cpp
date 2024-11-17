
#include<iostream>
using namespace std;
class base
{
    public:
    int i,j;
   virtual void fun()                      //1000
    {
        cout<<"inside base fun\n";
    }
    void gun()                              //2000
    {
        cout<<"inside base gun\n";
    }
   virtual void sun()                //3000
    {
        cout<<"inside base sun\n";
    }
     virtual void run()                 //4000
    {
        cout<<"inside base run\n";
    }
};
class Derived:public base
{
    public:
    int x,y;
    virtual void fun()          //5000
    {
        cout<<"inside derived fun\n";
    }
    void gun()                    //6000
    {
        cout<<"inside derived gun\n";
    }
    virtual void mun()               //7000
    {
        cout<<"inside derived mun\n";
    }
    void run()                    //6000
    {
        cout<<"inside derived run\n";
    }

   
};

int main()
{
    cout<<"size of base class"<<sizeof(base)<<"\n";
     cout<<"size of Derived class"<<sizeof(Derived)<<"\n";
    
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