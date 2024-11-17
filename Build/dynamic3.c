#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
    ptr = (int *)calloc(5,sizeof(int));
    return 0;
}