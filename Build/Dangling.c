#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = Null;
    p=(int *)malloc(5*sizeof(int));
    free(p);
    return 0;
    
}