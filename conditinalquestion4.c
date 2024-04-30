#include<stdio.h>
int main(){
//CHECK NUMBER IS ODD OR EVEN
    int number;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    if(number % 2 ==0){
        printf("THE GIVEN NUMBER IS EVEN");
    }
    else{
        printf("THE GIVEN NUMBER IS ODD");
    }
    return 0;
}