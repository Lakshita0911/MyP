#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r;
 printf("enter value of n:");
 scanf("%d",&n);
 r=n%10;
 n=n/10;
 printf("%d",r);
 r=n%10;
 n=n/10;
 printf("%d%d",r,n);
 getch();
}