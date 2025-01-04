#include<stdio.h>
int main(){
    int memorysize,i=0,c=0,arr[100],temp,memory,flag;
    printf("\nEnter memory size: ");
    scanf("%d",&memorysize);
    temp=memorysize;
    int input=1;
    while(input==1){
        printf("\nEnter memory for process %d : ",c+1);
        scanf("%d",&memory);
        if(memorysize - memory < 0){
            printf("Memory is Full\n");
            break;
        }
        arr[c] = memory;
        memorysize-=memory;
        
        printf("\ndo you want to continue? : y:->1?n:->0\n");
        scanf("%d",&flag);
        if(flag==0)break;
        c++;
    }
    printf("\nPROCESS\tMEMORY-ALLOCATED\n");
    for(i=0;i<c;i++){
        printf("%d\t\t%d\n",i+1,arr[i]);
    }
    printf("\nTotal memory allocated:- %d",temp-memorysize);
    printf("\nTotal memory fragmentation:- %d",memorysize);
 
}