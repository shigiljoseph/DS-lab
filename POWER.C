#include<stdio.h>
#include<conio.h>
 int pow(int a,int b){
  int x=a,n=b;
  if(n==0)
	return 1;
  else
	return (x*pow(x,n-1));
 }

  void main(){
   int a,b,p;
   clrscr();
   printf("Enter the number:");
   scanf("%d",&a);
   printf("Enter the power:");
   scanf("%d",&b);
   p=pow(a,b);
   printf("%d^%d =%d",a,b,p);
   getch();
  }