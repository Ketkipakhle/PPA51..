#include<stdio.h>
int main()
{
    int a=10,b=10;
    int No1 = 0,No2 = 0;

    No1=a++;  //post increment 
    printf("value of No1 : \n%d",No1);
    printf("value of a :\n%d",a);

    No2=++b; // Pre increment
    printf("value of No2 :\n%d",No2);
    printf("value of b :\n%d",b);




    return 0;
}