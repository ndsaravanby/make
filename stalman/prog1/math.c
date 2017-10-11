#include<stdio.h>
#include "add.h"
#include "sub.h"
int main()
{
int a,b,result_add,result_sub;
a=100;
b=17;
result_add=add(a,b);
result_sub=sub(a,b);
printf("result of addition is %d\n",result_add);
printf("result of subtraction is %d\n",result_sub);
}

