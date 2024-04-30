#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;i>=j;j++){
            printf("*");
       }
       printf("\n");
    }
    return 0;
}