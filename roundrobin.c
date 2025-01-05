#include<stdio.h>
int main(){
    int bt[10],tat[10],t,wt[10],rem_bt[10],elapsed_time=0,processes_left,n,ttat=0,twt=0;
    printf("\nEnter number of processeS: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("\nEnter burst time of process p[%d]: ",i+1);
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];
    }
    printf("\nEnter size of the time-slice: ");
    scanf("%d",&t);
    printf("\n");
    processes_left=n;
    while(processes_left!=0){
        for(int i=0;i<n;i++){
            if(rem_bt[i]>0){
                if(rem_bt[i]<=t){
                    elapsed_time+=rem_bt[i];
                    tat[i]=elapsed_time;
                    rem_bt[i]=0;
                    processes_left--;
                }
                else{
                    rem_bt[i]-=t;
                    elapsed_time+=t;
                    
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
        ttat+=tat[i];
        twt+=wt[i];
    }
    printf("\nPROCESS\tBURST-TIME\tWAIT-TIME\tTURN-AROUND-TIME\n");
    for(int i=0;i<n;i++){
        printf("\np[%d]\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("\nAverage turn around time is: %.2f",(float)ttat/n);
    printf("\nAverage waiting time is: %.2f",(float)twt/n);
    
    
}