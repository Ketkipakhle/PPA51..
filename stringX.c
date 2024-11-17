#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[]="python";
    char *str = Arr;
   printf("%c\n",*str);   //p
   str++;
   printf("%c\n",*str);
   str++;
   printf("%c\n",*str);
   str++;
   printf("%c\n",*str);
   str++;
   printf("%c\n",*str);

    return 0;
}