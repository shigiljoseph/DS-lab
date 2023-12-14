#include<stdio.h>
#include<conio.h>
int cost[10][10],q[10],v[10],c=1,n,m,i,j,visit[10],r=0,f=0,x=1;

 void bfs(int k){
      for(i=1;i<=n;i++){
	  if(cost[k][i]!=0 && v[i]==0){
	      q[++r]=i;
	      v[q[r]]=1;
	      c++;
	      visit[c]=q[r];
	  }
      }
	  if(f<=r){
		bfs(q[f++]);
	  }
      }
 void main(){
    clrscr();
    printf("\n\tBreadth First Search\n");
    printf("\nEnter the number of vertices:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      q[i]=0;
      v[i]=0;
    }
    printf("Enter the cost:\n");
    for (i=1;i<=n;i++){
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
    printf("\nEnter the starting vertex for traversal:");
    scanf("%d",&m);
    v[1]=1;
    q[r]=m;
    visit[c]=m;
    bfs(m);
    for(i=1;i<=n;i++){
	if(!v[i]){
	    x=0;
	    printf("\n BFS is not possible.Not all nodes are reachable!!");
	    break;
	}
    }
    if(x){
     printf("\nThe node which are reachable are:\n");
      for(i=1;i<=n;i++)
	printf("%d\t",visit[i]);
    }
    getch();
 }