#include<stdio.h>

int Addition(int no1,int no2)
{
    int ANS=0;
    ANS=no1+no2; //business logic
    return ANS;

}
int Substraction(int no1,int no2)
{
    int ANS=0;
    ANS=no1- no2; //business logic
    return ANS;

}
int main()
{
    int value1=0, value2=0, ret=0;

    printf("Enter first number:\n");
    scanf("%d",&value1);

    printf("Enter first number:\n");
    scanf("%d",&value2);

    ret=Addition(value1,value2);
    printf("Addition is :%d\n",ret);

    ret=Substraction(value1,value2);
    printf("substraction is :%d\n",ret);


    return 0;
}