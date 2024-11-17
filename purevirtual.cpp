#include<iostream>
using namespace std;
class Base
{
    public:
    int a,b;
     int addition(int No1,int No2)
     {
        return No1+No2;
     }
     virtual int substraction(int No1,int No2) =0;

};
class Derived : public Base
{
    public:
    int X,Y;
     int Multiplication(int No1,int No2)
     {
        return No1*No2;
          }     
          
          
};


int main()
{
   // Base bobj;
    Derived dobj;

    

    return 0;
}