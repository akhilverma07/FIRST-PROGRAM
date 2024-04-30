#include<stdio.h>
int swap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
    printf("THE SWAP VALUE IS :%d\n",a);
    printf("THE SWAP VALUE IS :%d\n",b);
    return 0;
}
int main(){

//SWAP TWO NUMBER WITHOUT USING VARIABLE
    int a;
    printf("ENTER THE FIRST VALUE : ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE SECOND VALUE : ");
    scanf("%d",&b);
    swap(a,b);
    
    return 0;
}