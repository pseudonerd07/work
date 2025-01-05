#include<stdio.h>
int main(){
    int count=0,j=0,n,input[10],output[20];
    printf("\nEnter the length of the binary bits:- ");
    scanf("%d",&n);
    printf("\nEnter the bits one by one :- ");
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
    }

    for(int i=0;i<n;i++){
        if(input[i] == 1)count++;
        output[j++] = input[i];
        if(count == 5){
            output[j++]=0;
            count=0;
        }
    }
    printf("\nAfter bit stuffing: \n");
    for(int i=0;i<j;i++){
        printf("%d ",output[i]);
    }
}