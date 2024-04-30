#include<stdio.h>
int main(){
//DAYS TO YEARS AND WEEKS
    int days;
    printf("ENTER THE DAYS : ");
    scanf("%d",&days);
    int years = days/365 ;
    int weeks = days/7 ;
    printf("THE DAYS CONVERT INTO YEARS : %d\n",years);
    printf("THE DAYS CONVERT INTO WEEKS : %d\n",weeks);
    return 0 ;
}