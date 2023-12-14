#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,item=0,n;
 clrscr();
 printf("Enter the array limit:");
 scanf("%d",&n);
 printf("Enter the  array:");
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 printf("Enter the element to be searched:");
 scanf("%d",&item);
 for(i=0;i<n;i++){
	  if(a[i]==item)
	     printf("Item found at %d position",i+1);

 }

  if(item==0)
	printf("Item not found");

 getch();
 }