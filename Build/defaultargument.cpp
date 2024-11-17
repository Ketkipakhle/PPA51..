#include<iostream>
using namespace std;
float calculatearea(float rad,float PI)
{
    float Ans =0.0f;
    Ans = PI * rad * rad;
    result= Ans;
} 

int main()
{
    float ret=0.0f ;
    
    ret=calculatearea(10.5f,3.14f);
    cout<<"area of circle is:"<<ret <<"\n";

    ret=calculatearea(10.5f);
    cout<<"area of circle is:"<<ret <<"\n";
    return 0;

}
