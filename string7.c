#include<stdio.h>
int factorial(int num){
    if(num==1){
        return 1;
    }
    return num*factorial(num-1);
}
int main(){
    int num;
    printf("ENTER THE NUMBER FOR FACTORIAL: ");
    scanf("%d",&num);
    int fact=factorial(num);
    printf("THE FACTORIAL OF %d IS : %d",num,fact);
    return 0;
}