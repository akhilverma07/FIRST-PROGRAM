#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    int sum=0;
    int j=(2*num-1);
    for(int i=1;i<=j;i=i+2){
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nTHE SUM OF SERIES IS : %d",sum);
    return 0;
}