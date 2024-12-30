#include<stdio.h>
#include <conio.h>
int main(){
	int m,p,c,h,e,total;
	float percent;
	printf("enter marks of 5 subject:");
	scanf("%d%d%d%d%d",&m,&p,&c,&h,&e);
	total=m+p+c+h+e;
	percent= (float)total/5;
	printf("total marks:%d",total);
	printf("percentage is:%f",percent);
	return 0;
	
}
