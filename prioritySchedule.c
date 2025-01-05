#include<stdio.h>
int main(){
    int bt[10],n,ct[10],pr[10],wt[10],tat[10],ttat=0,twt=0,sum=0;
    printf("\nEnter number of processes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter burst time and priority of p[%d]: ",i+1);
        scanf("%d%d",&bt[i],&pr[i]);
    }
    //-----------------------------------------------------------------------------------
    
    for(int i=0;i<n;i++){
        int priority = i;
        for(int j=i+1;j<n;j++){
            if(pr[j]<pr[priority]){
                priority=j;
            }
        }
        int temp1 = bt[i];
        bt[i] = bt[priority];
        bt[priority]=temp1;
        
        int temp2 = pr[i];
        pr[i] = pr[priority];
        pr[priority]=temp2;
    }
    //-----------------------------------------------------------------------------------
    for(int i=0;i<n;i++){
        sum=sum+bt[i];
        ct[i]=sum;
        tat[i]=ct[i];
        ttat+=tat[i];
        wt[i]=tat[i]-bt[i];
        twt+=wt[i];
    }
    printf("\nPROCESS\tBURST-TIME\tWAITING-TIME\tTURN-AROUND-TIME\n");
    for(int i=0;i<n;i++){
        printf("\n%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("\nAVG TURN AROUND TIME:- %.2f",(float)ttat/n);
    printf("\nAVG WAITING TIME:- %.2f",(float)twt/n);
    
}