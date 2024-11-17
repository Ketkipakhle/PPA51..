#include<stdio.h>

struct Demo
{

    int no=11;
    float f;
    double d;
    int i;

};

int main()
{
    struct Demo obj;
    struct *ptr=&obj;

    ptr->no=11;
    ptr->f=3.10;
    ptr->d=90.999;
    ptr->i=21;

    printf("%d\n",ptr->no);
    





    return 0;
}