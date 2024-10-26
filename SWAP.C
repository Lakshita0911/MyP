#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 printf("enter 2 numbers:");
 scanf("%d%d",&a,&b);
 printf("numbers before swapping\n");
 c=a;
 a=b;
 b=c;
 printf("numbers after swapping\n");
 printf("%d%d",a,b);
 getch();
 }