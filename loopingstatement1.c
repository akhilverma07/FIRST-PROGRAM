#include<stdio.h>
int main(){
//sum of n natural number
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    int sum=0;
    for(int i =1;i<=num;i++){
        printf("%d  ",i);
        sum=sum+i;
        
    }
    printf("\nTHE SUM OF %d NUMBER IS : %d ",num,sum);
    return 0;
}