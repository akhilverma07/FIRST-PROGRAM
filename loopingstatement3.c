#include<stdio.h>
int main(){
//multiplication table
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf(" %d * %d = %d\n",num,i,num*i);
    }
    return 0;
}

