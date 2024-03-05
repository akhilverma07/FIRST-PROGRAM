//HERE STUDENT NAME AND ROLL NUMBER AND THREE SUBJECT MARKS AVERAGE AND TOTAL AND GRADE BY USING STRUCTURE
#include<stdio.h>
struct student{
        char first_name[10];
        char registration_number[10];
        float subject1;
        float subject2;
        float subject3;
        float total;
        float average;
       
    }student;
int main(){
    
    int num;
    printf("ENTER THE NUMBER OF STUDENT : ");
    scanf("%d",&num);
   
    struct student arr[num];
    
    for(int i=0;i<num;i++){
        printf("ENTER THE %d STUDENT REGISTRATION NUMBER : ",i+1);
        scanf("%s",arr[i].registration_number);
        printf("ENTER THE %d STUDENT FIRST NAME : ",i+1);
        scanf("%s",arr[i].first_name);
        printf("ENTER THE %d STUDENT 1st SUBJECT MARKS : ",i+1);
        scanf("%f",&arr[i].subject1);
        printf("ENTER THE %d STUDENT 2nd SUBJECT MARKS : ",i+1);
        scanf("%f",&arr[i].subject2);
        printf("ENTER THE %d STUDENT 3rd SUBJECT MARKS : ",i+1);
        scanf("%f",&arr[i].subject3);
    }
    for(int i=0;i<num;i++){
        arr[i].total =(arr[i].subject1 + arr[i].subject2 + arr[i].subject3);
        arr[i].average=(arr[i].total/3);
    }
    printf("\nSTUDENT MARK LIST \n");
    printf("REG NO.       NAME       TOTAL      AVERAGE        GRADE \n");
    for(int i=0;i<num;i++){
        if(arr[i].average >= 90){
            printf("%s           %s        %.2f       %.2f         S",arr[i].registration_number,arr[i].first_name,arr[i].total,arr[i].average);
        }
        else if(arr[i].average >= 80 ){
            printf("%s          %s         %.2f       %.2f        A",arr[i].registration_number,arr[i].first_name,arr[i].total,arr[i].average);
        }
        else if(arr[i].average >= 70 ){
            printf("%s           %s        %.2f       %.2f        B",arr[i].registration_number,arr[i].first_name,arr[i].total,arr[i].average);
        }
        else if(arr[i].average >= 50 ){
            printf("%s           %s        %.2f       %.2f        C",arr[i].registration_number,arr[i].first_name,arr[i].total,arr[i].average);
        }
        
        else{
           printf("%s            %s        %.2f       %.2f        F",arr[i].registration_number,arr[i].first_name,arr[i].total,arr[i].average);
        }
        printf("\n");
    }
    return 0;
}
