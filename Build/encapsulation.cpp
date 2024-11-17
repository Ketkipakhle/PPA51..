#include<iostream>
using namespace std;
class Demo
{
    public:
    int A;
    int B;
    void fun()
    {
        cout<<"inside fun\n";
    }

    void gum()
    {
     cout<<"inside gun\n";
    }
    
       
    

};
int main()
{
    Demo obj;
    cout<<sizeof(obj)<<"\n";
    obj.A=11;
    obj.B=12;

    obj.fun();
    obj.gun();
     cout<<obj.fun<<"\n";
      cout<<obj.gun<<"\n";

return 0;
}
    