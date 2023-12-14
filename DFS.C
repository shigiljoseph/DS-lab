#include<stdio.h>
#include<conio.h>
int i,s=1,j,n,c=0,x=1,cost[10][10],m,stack[10],top=0,v[10],visit[10];

void dfs(int k){
  while(1){
    int f=0;
    for(i=1;i<=n;i++){
	if(cost[k][i]!=0 && v[i]==0){
	   stack[++top]=i;
	   c++;
	   visit[c]=stack[top];
	   v[i]=1;
	   f++;
	   s++;
	   if(s==n)
	       return;
	   break;
	}
    }
    if(f==0){
      top--;
    }
    k=stack[top];
  }
}

void main(){
clrscr();
  printf("\n\t\tDepth First Search\n" );
  printf("Enter the no of nodes:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
	v[i]=0;
	stack[i]=0;
  }
  printf("Enter the costs:\n");
  for(i=1;i<=n;i++){
     for(j=i;j<=n;j++){
	 printf("cost[%d][%d]:",i,j);
	 scanf("%d",&cost[i][j]);
	 cost[j][i]=cost[i][j];
     }
  }
  printf(" \ncost adjacency matrix:\n");
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
		printf("%d\t",cost[i][j]);
      }
      printf("\n");
  }
  printf("\nEnter the node to start travesing:");
  scanf("%d",&m);
  stack[top]=m;
  visit[c]=m;
  v[m]=1;
  dfs(m);
  for(i=1;i<=n;i++){
      if(!v[i]){
	    x=0;
	    printf("\n BFS is not possible.Not all nodes are reachable!!");
	    break;
     }
  }
   if(x){
      printf("\nThe node which are reachable are:\n");
      for(i=0;i<n;i++)
	printf("%d\t",visit[i]);
    }
   getch();
}