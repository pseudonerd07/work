#include <stdio.h>

int main() {
    int length,element,refstr[20],frames,farr[10],pf=0,count=0;
    printf("\nEnter length of ref string: ");
    scanf("%d",&length);
    printf("\nEnter the elements of ref string: \n");
    for(int i=0;i<length;i++){
        scanf("%d",&element);
        refstr[i]=element;
    }
    printf("\nEnter number of frames: ");
    scanf("%d",&frames);
 
    for(int i=0;i<frames;i++){
        farr[i]=-1;
    }
    printf("\n Page Simulation starts here: --------------------------\n");
    for(int i=0;i<length;i++){
        int flag=0;
        for(int j=0;j<frames;j++){
            if(farr[j] == refstr[i]){
                flag=1;
                break;
            }
            
        }
        if(flag == 0){
            pf++;
            farr[count] = refstr[i];
            count=(count+1)%frames;
        }
        for(int k=0;k<frames;k++){
            printf("%d\t",farr[k]);
        }
        if(flag==0){
            printf("\t Page Fault-> %d\n",pf);
        }
        else{
            printf("\n");
        }
        
    }
    
    printf("Total number of page faults are: %d",pf);
}
