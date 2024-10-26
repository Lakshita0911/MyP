#include<stdio.h>
#include<conio.h>
int main()
 {
   int a,b,c,d;
   printf("enter the value of a\n");
   printf("enter the value of b\n");
   printf("enter the value of c\n");
   scanf("%d %d %d",&a,&b,&c);
   d=a+b*c%b+4*b-c+a*b;
   scanf("%d",d);
   printf("the value of d:%d");
   return 0;
   }
