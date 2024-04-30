#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE NUMBER FOR FACTORIAL: ");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("THE FACTORIAL OF %d IS : %d",num,fact);
    return 0;
}