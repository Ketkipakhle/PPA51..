#include<iostream>
using namespace std;
class Demo
{
    public:
    int A;
    private:
    int B;

    public:
    Demo()
    {
        A=21;
        B=31;
    }
    void Fun()
    {
        cout<<"value of A :"<<A<<"\n"; //Allowed
         cout<<"value of B :"<<B<<"\n";// Allowed
    }

}
int main()
{
    Demo obj;
    obj.fun()
     cout<<"value of A :"<<obj.A<<"\n";
      cout<<"value of B :"<<obj.B<<"\n";
    return 0;
}