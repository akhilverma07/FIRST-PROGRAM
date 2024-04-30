#include<stdio.h>
int swap(int* x,int* y){
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
    return 0;
}
int main(){

//SWAP TWO NUMBER WITHOUT USING VARIABLE call value and pass refrence value
    int a;
    printf("ENTER THE FIRST VALUE : ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE SECOND VALUE : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("THE SWAP VALUE IS :%d\n",a);
    printf("THE SWAP VALUE IS :%d\n",b);
    return 0;
}