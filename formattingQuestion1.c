#include<stdio.h>
int main(){
//EMPLOYMENT ID , GENDER ,AGE MOBILE NUMBER AND SALARY TAKING INPUT AND SHOW
    int employment_id,age;
    float salary ;
    char gender[10], mobile_number[10];
    printf("ENTER THE EMPLOYMENT ID NUMBER : ");
    scanf("%d",&employment_id);
    printf("ENTER THE GENDER : ");
    scanf("%s",&gender);
    printf("ENTER THE AGE : ");
    scanf("%d",&age);
    printf("ENTER THE MOBILE NUMBER : ");
    scanf("%s",&mobile_number);
    printf("ENTER THE SALARY : ");
    scanf("%f",&salary);
    printf("THE EMPLOYMENT ID IS : %d\n",employment_id);
    printf("THE GENDER IS : %s\n",gender);
    printf("THE AGE IS : %d\n",age);
    printf("THE MOBILE NUMBER IS : %s\n",mobile_number);
    printf("THE SALARY IS : %.2f\n",salary);
    return 0 ;
}