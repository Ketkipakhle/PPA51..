#include<stdio.h>
int main()
{
    int No1 = 0;
    int No2 = 0;
    int ANS = 0;

    printf("Enter first number:\n");
    scanf("%d",&No1);
    printf("Enter second number:\n");
    scanf("%d",&No2);

    ANS = No1+No2;

    printf("Addition is :%d\n",ANS);
   
    
    return 0;
}