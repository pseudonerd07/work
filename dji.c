#include<stdio.h>
void dji(int n,int cost[10][10],int s,int dist[10]){
    int i,v,min,count=1,visited[10];
    for(i=1;i<=n;i++){
        visited[i]=0;
        dist[i] = cost[s][i];
    }
    visited[s]=1;
    dist[s]=0;
    while(count<n){
        min=999;
        for(i=1;i<=n;i++){
            if(dist[i]<min && !visited[i]){
                min=dist[i];
                v=i;
            }
        }
        visited[v]=1;
        count++;
        for(i=1;i<=n;i++){
            if(dist[i] > dist[v] + cost[v][i]) dist[i] = dist[v] + cost[v][i];
        }
    }
}
int main(){
    int i,j,cost[10][10],dist[10],s,n;
    printf("\nEnter number of nodes:\n");
    scanf("%d",&n);
    printf("\nFill the cost matrix: \n");
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j] == 0)cost[i][j]=999;
        }
    }
    printf("\nEnter the source node: \n");
    scanf("%d",&s);
    dji(n,cost,s,dist);
    printf("\nThe minimum distance from %d is:\n",s);
    for(i=1;i<=n;i++){
        if(i!=s){
            printf("%d -> %d = %d\n",s,i,dist[i]);
        }
    }
    
}