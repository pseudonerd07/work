#include<stdio.h>
#include<string.h>
int main(){
    int n,k=0;
    char input[50][50],frame[50][50];
    char flag[10]="flag";
    char esc[10]="esc";
    printf("\nEnter number of strings: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",input[i]);
    }
    printf("\nYou entered:- \n");
    for(int i=0;i<n;i++){
        printf("%s ",input[i]);
    }
    strcpy(frame[k++],flag);
    for(int i=0;i<n;i++){
        if((strcmp(input[i],flag) == 0) || (strcmp(input[i],esc) == 0)){
            strcpy(frame[k++],esc);
        }
        strcpy(frame[k++],input[i]);
    }
    strcpy(frame[k++],flag);
    printf("\n------------------------------------------\nByte stuffing at senders side: \n");
    for(int i=0;i<k;i++){
        printf("%s ",frame[i]);
    }
}