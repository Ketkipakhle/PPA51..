#include<stdio.h>
//Function defination
int Addition(int value1,int value2)
{
    int Result = 0;        //local variable
    
    Result = value1 + value2;

    return Result;
}
int main()       // Entry Point function
{
    int No1= 0,No2 =0 ,Ans=0; // local variables

    printf("enter first number No1 :\n");
    scanf("%d",&No1);

    printf("enter second number No2 :\n");
    scanf("%d",&No2);

    Ans = Addition(No1,No2);     // function call
    printf("Addtion :%d\n",Ans);




    return 0;
}