#include<stdio.h>
#include<string.h>
int main(){
    char s[20],sd,ed;
    printf("\nCharacter Stuffing------------------------------------------------\n");
    printf("Enter the string whose characters are to be stuffed: ");
    scanf("%s",s);
    printf("Enter the starting delimitter: ");
    scanf(" %c",&sd);
    printf("Enter the the ending delimitter: ");
    scanf(" %c",&ed);
    printf("\nAfter stuffing:-\n");
    printf("%c",sd);
    for(int i=0;i<strlen(s);i++){
        if((s[i] == sd) || (s[i] == ed)){
            printf("%c",s[i]);
        }
        printf("%c",s[i]);
    }
    printf("%c",ed);
    
}