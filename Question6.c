/*
#include<stdio.h>
int main(){
//CHANGE THE TEMPERATURE CENTIGRATE TO FAHRENHEIT
    float celcius;
    printf("ENTER THE TEMPERATURE IN CENTIGRATE : ");
    scanf("%f",&celcius);
    float faren =  (1.8*celcius)+32 ;
    printf("THE TEMPERATURE IN FARENHEIT IS : %.2f\n",faren);
    return 0 ;
}
*/
#include<stdio.h>
struct employee{
    char employee_field[20];
    char empolyee_name[20];
    char empolyee_department[20];
    int years;
}employee;
void displayemployee(struct employee arr[],int num){
    for(int i=0;i<num;i++){
        printf("\nTHE DETAILS OF EMPLOYEE %d\n",i+1);
        printf("FIELD OF EMPLOYEE is %s",arr[i].employee_field);
        printf("EMPLOYEE NAME : %s",arr[i].empolyee_name);
        printf("EMPLOYEE DEPARTMENT : %s",arr[i].empolyee_department);
        printf("EMPLOYEE years : %d\n",arr[i].years);
    }
}
int main(){
    int num;
    printf("HOW MANY EMPOLYEE DEATILS ENTERED : ");
    scanf("%d",&num);
    struct employee arr[num];
    for(int i=0;i<num;i++){
        printf("\nENTER THE DETAILS OF EMPLOYEE %d\n",i+1);
        printf("EMPLOYEE field : ");
        scanf("%s",arr[i].employee_field);
        printf("EMPLOYEE NAME : ");
        scanf("%s",arr[i].empolyee_name);
        printf("EMPLOYEE DEPARTMENT : ");
        scanf("%s",arr[i].empolyee_department);
        printf("EMPLOYEE years : ");
        scanf("%d",&arr[i].years);
    }	 	  	 	   	  	   	    	 	   	     	 	
    displayemployee(arr ,num);
    int max_years_index=0;
    for(int i=0;i<num;i++){
        if(arr[i].years > arr[max_years_index].years){
          max_years_index=i;  
        }
    }
    printf("\nHIGHEST YEARS EMPLOYEE DETAILS \n");
 
    printf("FIELD OF EMPLOYEE is %s",arr[max_years_index].employee_field);
    printf("EMPLOYEE NAME : %s",arr[max_years_index].empolyee_name);
    printf("EMPLOYEE DEPARTMENT : %s",arr[max_years_index].empolyee_department);
    printf("EMPLOYEE years : %d\n",arr[max_years_index].years);
    return 0;
}
