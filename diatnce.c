#include<stdio.h>
#include<conio.h>
int main(){

int km1,m1,cm1,km2,m2,cm2,km3,m3,cm3;
printf("enter 2 distance:");
scanf("%d%d%d",&km1,&m1,&cm1);
scanf("%d%d%d",&km2,&m2,&cm2);
cm3=(cm1+cm2)%100;
m3=(m1+m2)%1000 +(cm1+cm2)/100;
km3=(km1+km2)+(m1+m2) / 1000;
printf("%d-%d-%d",km3,m3,cm3);
return 0;
}

