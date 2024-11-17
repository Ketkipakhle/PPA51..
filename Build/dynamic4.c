#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
    ptr = malloc(5 * sizeof(int));
    ptr = (int *)realloc(5,7 * sizeof(int));
    return 0;
}