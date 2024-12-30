#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float a,b,c,x1,x2,d;
	printf("enter the value of a,b&c:\n");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("imaginary roots");
		
	}
	else
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("roots= %f,%f",x1,x2);
		
	}
}
