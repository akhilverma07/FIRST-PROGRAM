#include<stdio.h>
int main(){
// CALCULATE 0F 5 SUBJECT MARKS AND PERCENTAGE
    float subject1;
    printf("ENTER THE SUBJECT 1 MARKS : ");
    scanf("%f",&subject1);
    float subject2;
    printf("ENTER THE SUBJECT 2 MARKS : ");
    scanf("%f",&subject2);
    float subject3;
    printf("ENTER THE SUBJECT 3 MARKS : ");
    scanf("%f",&subject3);
    float subject4;
    printf("ENTER THE SUBJECT 4 MARKS : ");
    scanf("%f",&subject4);
    float subject5;
    printf("ENTER THE SUBJECT 5 MARKS : ");
    scanf("%f",&subject5);
    float sum = (subject1+subject2+subject3+subject4+subject5);
    printf("THE SUM OF ALL SUBJECT IS: %.2f\n",sum);
    float percentage = sum/5 ;
    printf("THE PERCENTAGE OF ALL SUBJECT IS : %.2f",percentage);
    return 0 ;
}