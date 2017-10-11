#include<stdio.h>
#include "add_sub.c"
int main()
{
int a,b,result;
a=100;
b=75;
printf ("entering the main function\n");
result=add(a,b);
printf("result of addition is %d\n",result);
}
