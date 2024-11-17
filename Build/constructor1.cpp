#include<iostream>
using namespace std;
class Marvellous
{
    public:
    int no1;
    int no2;
    Marvellous()
    {
        cout<<"inside default constructor \n";
        no1=0;
        no2=0;


    }
    Marvellous(int a,int b)
    {
        cout<<"inside parameterized constructoe \n";
        no1=a;
        no2=b;

    }
     ~Marvellous(int a,int b)
    {
        cout<<"inside parameterized constructoe \n";
        

    }
    void fun()
    {
        cout<<"inside fun\n";
    }
    
};

int main()
{
    Marvellous mobj;
    mobj.fun();

    return 0;

}