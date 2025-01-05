#include<stdio.h>
int main(){
    int ms,ps,n,ft[20][20],s[20],rempages,x,y,z;
    printf("\nEnter the memory size: ");
    scanf("%d",&ms);
    printf("\nEnter the page size: ");
    scanf("%d",&ps);
    int nop=ms/ps;
    rempages=nop;
    printf("\nTotal no of pages are: %d ",nop);
    printf("\nEnter no of proceses: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int requiredpages;
        printf("\nEnter total number of pages for process p[%d]:  ",i+1);
        scanf("%d",&requiredpages);
        if(requiredpages>rempages){
            printf("\nMemory-Full!\n");
            break;
        }
        s[i]=requiredpages;
        rempages-=s[i];
        printf("Enter page table for process p[%d]: ",i+1);
        for(int j=0;j<s[i];j++){
            scanf("%d",&ft[i][j]);
        }
    }
    printf("\nEnter the logical address below to find its actual Physical address:- \n");
    printf("Enter--> process number , frame number[0-indexed] , offset :\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>n || y > s[x-1]-1 || y>ps){
        printf("\nINVALID\n");
    }else{
        printf("The physical address is: %d",ft[x-1][y]*ps + z);
    }
}