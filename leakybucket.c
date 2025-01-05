#include<stdio.h>
int main(){
    int incoming,outgoing,n,store=0,bucket_size,size_left;
    printf("\nEnter outgoing rate , bucket size and number of inputs:- ");
    scanf("%d%d%d",&outgoing,&bucket_size,&n);
    while(n>0){
        printf("\nEnter incoming number of packets:- ");
        scanf("%d",&incoming);
        size_left = (bucket_size - store);
        if(incoming <= size_left){
            store+=incoming;
        }else{
            printf("\n%d number of packets dropped... \n",incoming - size_left);
            store = bucket_size;
        }
        printf("\n%d number of packets are filled out of %d packets bucket size\n",store,bucket_size);
        
        store-=outgoing;
        if(store<0)store=0;
        printf("\nAfter outgoing %d packets left out of %d packets bucket size\n",store,bucket_size);
        n--;
        
    }
}