#include<stdio.h>
#include<conio.h>
void main(){
int a[20],i,j,n,temp;
clrscr();
printf("Enter the array limit:");
scanf("%d",&n);
printf("Enter the array:");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("Sorted array: ");
for(i=0;i<n-1;i++){
   for(j=0;j<n;j++){
     if(a[j]>a[j+1]){
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
     }
   }
 }
 for(i=0;i<n;i++)
	printf("%d \t",a[i]);
 getch();
}