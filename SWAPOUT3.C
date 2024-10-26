#include<stdio.h>
int main()
{
 int a,b;
 printf("numbers before swapping:");
 printf("enter 2 number:\n");
 scanf("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("%d %d",a,b);
 return 0;
 }