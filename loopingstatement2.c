#include<stdio.h>
int main(){
//number is divisible by 7 or not in a given range and print all divisible number
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num >=1 && num<200){
            if(i%7==0){
               printf("%d ",i);
        }
        }
        }
    return 0;
}