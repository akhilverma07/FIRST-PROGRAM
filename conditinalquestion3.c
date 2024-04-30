#include<stdio.h>
int main(){
//GIVEN YEAR IS LEAP YEAR OR NOT
    int year;
    printf("ENTER THE YEAR : ");
    scanf("%d",&year);
    if(year % 4 ==0 ){
        printf("THE GIVEN YEAR IS LEAP YEAR ");
    }
    else{
        printf("THE GIVEN YEAR IS NOT LEAP YEAR");
    }
    
    
    return 0;
}