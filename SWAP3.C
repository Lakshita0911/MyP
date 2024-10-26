#include<stdio.h>
int main()
{
 int a,b;
 printf("numbers before swapping:\n");
 printf("enter two numbers:\n");
 scanf("%d %d",&a,&b);
 a=a*b;
 b=a/b;
 a=a/b;
 printf("%d %d",a,b);
 return 0;
 }