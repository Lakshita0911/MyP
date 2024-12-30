#include<stdio.h>
#include<conio.h>
int main(){

int h1,m1,s1,h2,s2,m2,h3,m3,s3;
printf("enter 2 time interval:");
scanf("%d%d%d",&h1,&m1,&s1);
scanf("%d%d%d",&h2,&m2,&s2);
s3=(s1+s2)%60;
m3=(m1+m2)%60 +(s1+s2)/60;
h3=(h1+h2)+(m1+m2) / 60;
printf("%d-%d-%d",h3,m3,s3);
return 0;
}

