#include<stdio.h>

    int isNeon(int num){
        int square = num*num;
        int sum=0;
        while(square>0){
            sum +=square%10;
            square /=10;
        }
        return sum ==num;
    }
    int main(){
        int number;
        printf("ENTER THE NUMBER: ");
        scanf("%d",&number);
        if(isNeon(number)){
            printf("%d is a NEON number ",number);
        }else{
            printf("%d is a not neon number ",number);
        }
     return 0;
}