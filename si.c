
#include<stdio.h>
#include<conio.h>
int main(){

int p,r,t;
float SI,amount;
printf("enter the p:");
scanf("%d",&p);
	
printf("enter rate :" );
scanf("%d",&r);
printf("enter t:");
scanf("%d",&t);
SI= (p*r*t)/100;
printf("simple interst:%f",SI);
amount= SI+p;
printf("total amount :%f",amount);
return 0;
}
