#include<iostream>
using namespace std;
class Demo
{
    public:
    int Addition(int A,int B)
    {
        return A+B;
    }
    int Addition(double A,double B)
    {
        return A+B;

    }
    int Addition(int A,int B,int C)
    {
        return A+B+C;
    }

};
int main()
{
    Demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.99,11.98)<<"\n";
    cout<<obj.Addition(10,11,23)<<"\n";
    
    return 0;
}