/*
#include<stdio.h>
int main(){
// DISPLAY THE GREETING MESSEAGE
    char first_name[10];
    printf("ENTER THE FIRST NAME : ");
    scanf("%s",&first_name);
    char last_name[10];
    printf("ENTER THE LAST NAME : ");
    scanf("%s",&last_name);
    printf("Hello!\n");
    printf("%s",first_name);
    printf(" %s\n",last_name);
    printf("Good Morning... Welcome to \"SCOOPS Lab\"");
    return 0 ;
}
*/
#include<stdio.h>
struct Student{
    char roll_number[10];
    char name[20];
    char course[10];
};
void displaystudent(struct Student student[],int num){
    for(int i=0;i<num;i++){
        printf("THE %d STUDENT REGISTRATION NUMBER :%s\n",i+1,student[i].roll_number);
        
        printf("THE %d STUDENT NAME : %s\n",i+1,student[i].name);
        
        printf("THE %d STUDENT COURSE DETAILS : %s\n",i+1,student[i].course);

    }
}
int main(){
    int num;
    printf("ENTER THE NUMBER OF STUDENT : ");
    scanf("%d",&num);
    struct Student student[num];
    for(int i=0;i<num;i++){	 	  	 	   	  	   	    	 	   	     	 	
        printf("ENTER THE %d STUDENT REGISTRATION NUMBER : ",i+1);
        scanf("%s",student[i].roll_number);
        printf("ENTER THE %d STUDENT NAME : ",i+1);
        scanf("%s",student[i].name);
        printf("ENTER THE %d STUDENT COURSE DETAILS : ",i+1);
        scanf("%s",student[i].course);
    }
    displaystudent(student,num);
    return 0;
}