#include<stdio.h>
int main(){
    int send[10],rec[10],c1,c2,c3,c;
    printf("Enter 4 bits to be encoded:-\n");;
    scanf("%d%d%d%d",&send[0],&send[1],&send[2],&send[4]);
    send[6] = send[0]^send[2]^send[4];
    send[5] = send[4]^send[1]^send[0];
    send[3] = send[0]^send[1]^send[2];
    printf("\nThe data sent is: \n");
    for(int i=0;i<7;i++){
        printf("%d ",send[i]);
    }
    printf("\nEnter the data recieved:- ");
    for(int i=0;i<7;i++){
        scanf("%d",&rec[i]);
    }
    c1 = rec[0]^rec[2]^rec[4]^rec[6];
    c2 = rec[0]^rec[1]^rec[4]^rec[5];
    c3 = rec[0]^rec[1]^rec[2]^rec[3];
    c = 4*c3 + 2*c2 + c1;
    if(c==0){
        printf("\nNo error at the reciever's side!\n");
    }else{
        printf("Error!!\nbit - - - > %d\n",c);
    }
    if(rec[7-c] == 0)rec[7-c]=1;
    else rec[7-c]=0;
    printf("\nThe correct bits are:- ");
    for(int i=0;i<7;i++){
        printf("%d ",rec[i]);
    }
    
}