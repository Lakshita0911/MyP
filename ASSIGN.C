#include<stdio.h>
#include<conio.h>
int main()
 {
  int x,y,z,u;
  x=3,y=4,z=5,u=6;
  float A;
  A=(u+=y*=z-=x+=5);
  printf("value of A=%f",A);
  return 0;
  }