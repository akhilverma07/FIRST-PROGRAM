#include<stdio.h>
int main(){
//number is prime or not
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    int prime=0;
    for(int i =1;i<num;i++){
        if(num%i==0){
            prime+=i;
        }
    }
    if(prime==1){
        printf("THE GIVEN NUMBER IS PRIME");
    }else{
        printf("THE GIVEN NUMBER IS not PRIME");
    }
    return 0;
}