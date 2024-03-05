#include<stdio.h>
struct employee{
    char employee_id[10];
    char empolyee_name[20];
    int salary;
}employee;
int main(){
    int num;
    printf("HOW MANY EMPOLYEE DEATILS ENTERED : ");
    scanf("%d",&num);
    struct employee arr[num];
    for(int i=0;i<num;i++){
        printf("\nENTER THE DETAILS OF EMPLOYEE %d\n",i+1);
        printf("EMPLOYEE ID : ");
        scanf("%s",arr[i].employee_id);
        printf("EMPLOYEE NAME : ");
        scanf("%s",arr[i].empolyee_name);
        printf("EMPLOYEE SALARY : ");
        scanf("%d",&arr[i].salary);
    }
    int max_salary_index=0;
    for(int i=0;i<num;i++){
        if(arr[i].salary > arr[max_salary_index].salary){
          max_salary_index=i;  
        }
    }
    printf("\nHIGHEST SALARY EMPLOYEE DETAILS \n");
    printf("EMP ID         NAME            SALARY\n");
    printf("%s            %s           RS.%d ",arr[max_salary_index].employee_id,arr[max_salary_index].empolyee_name,arr[max_salary_index].salary);
    return 0;
}
