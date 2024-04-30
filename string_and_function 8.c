/*
1.

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





*/


/*


2.


#include<stdio.h>
int factorial(int num){	 	  	 	   	  	   	    	 	   	     	 	
    if(num==1){
        return 1;
    }
    return num*factorial(num-1);
}
int main(){
    int num;
    printf("ENTER THE NUMBER FOR FACTORIAL: ");
    scanf("%d",&num);
    int fact=factorial(num);
    printf("THE FACTORIAL OF %d IS : %d",num,fact);
    return 0;
}




*/





/*
3.

#include<stdio.h>
#include<ctype.h>
int check_empID(int empid){
    if (empid>=10000&& empid<=99999){
        printf("EMPID is valid.You can proceed\n");
        return 1;
    }else{
        printf("EMPID is not valid");
        return 0;
    }	 	  	 	   	  	   	    	 	   	     	 	
}
int Tax_Calculation(int income,char gender){
    if(income <=190000){
        printf("NO TAX\n");
    }
    else if(income >=200000 && income <500000){
        if((gender=='M') || (gender=='m')){
            int tax=income*10/100;
            printf("THE tax is 10 percent of income and tax is %d\n",tax);
        }
        else if((gender=='F') || (gender=='f')){
           printf("NO TAX\n"); 
        }
    }
    else if(income >=500000 && income < 1000000){
        if((gender=='M') || (gender=='m')){
            int tax=income*20/100;
            printf("THE tax is 20 percent of income and tax is %d\n",tax);
        }
        else if((gender=='F') || (gender=='f')){
           int tax=income*10/100;
           printf("THE tax is 20 percent of income and tax is %d\n",tax);
        }
    }
    else if(income >=1000000){
        if((gender=='M') || (gender=='m')){
            int tax=income*25/100;
            printf("THE tax is 25 percent of income and tax is %d\n",tax);
        }
        else if((gender=='F') || (gender=='f')){
           int tax=income*20/100;
           printf("THE tax is 20 percent of income and tax is %d\n",tax); 
        }
    }
    else{
        printf("PLEASE ENTER SET LIMIT INCOME\n");
    }	 	  	 	   	  	   	    	 	   	     	 	
    return 0;
    } 
void show(char employeename[],int empid,char gender,char contact_number[],int income){
    printf("EMPLOYEE DETIALS\n");
    printf("EMPLOYEE NAME : %s\n",employeename);
    printf("EMPOLYEE ID : %d\n",empid);
    printf("EMPLOYEE GENDER : %c\n",gender);
    printf("EMPLOYEE CONTACT NUMBER : %s\n",contact_number);
    printf("EMPOLYEE INCOME : %d\n",income);
}
int main(){
    char employeename[50];
    printf("ENTER THE EMPLOYEE NAME : ");
    scanf("%s",employeename);
    int empid;
    printf("ENTER THE EMPOLYEE ID : ");
    scanf("%d",&empid);
    char gender;
    printf("ENTER THE EMPLOYEE GENDER(M|F) : ");
    scanf("%s",&gender);
    char contact_number[11];
    printf("ENTER THE EMPLOYEE CONTACT NUMBER : ");
    scanf("%s",contact_number);
    int income;
    printf("ENTER THE EMPOLYEE INCOME : ");
    scanf("%d",&income);
    check_empID(empid);
    Tax_Calculation(income,gender);
    show(employeename,empid,gender,contact_number,income);
    return 0;
}




*/





/*
4.

#include<stdio.h>
float calculated(int vechicleType,int duration){	 	  	 	   	  	   	    	 	   	     	 	
    float fee=0;
    switch (vechicleType){
        case 1 :
        if(duration <=8){
            fee=20;
        }
        else{
            fee=20+(duration-8)*5;
        }
        break;
    case 2:
        if(duration <=8){
            fee=20;
        }
        else{
            fee=20+(duration-8)*8;
        }
        break;
    case 3:
        if(duration <=24){
            fee=10;
        }
        else{
            fee=10+(duration-8)*3;
        }
        break;
    default:
    printf("ENTER INVALID VECHICLE NUMBER \n");
    fee=-1;
    }  
    return fee;
}
int main(){
    char vechicle_number[15];
    int vechicleType,entryTime,exitTime;
    float fee;
    printf("ENTER THE VECHICLE NUMBER : ");
    scanf("%s",vechicle_number);
    printf("ENTER THE VECHICLE TYPE (1-BIKE 2-CAR 3-CICYCLE) : ");
    scanf("%d",&vechicleType);
    printf("ENTER ENTRY TIME : ");
    scanf("%d",&entryTime);
    printf("ENTER EXIT TIME : ");
    scanf("%d",&exitTime);
    
    int duration=entryTime-exitTime;
    fee=calculated(vechicleType,duration);
    if (fee>=0){	 	  	 	   	  	   	    	 	   	     	 	
        printf("\n-- VECHICLE PARKING INVOICE --\n");
        printf("VECHICLE NUMBER : %s\n ",vechicle_number);
        printf("ENTRY TIME : %d\n ",entryTime);
        printf("ENTER EXIT TIME : %d\n ",exitTime);
        printf("ENTER DUURATION TIME : %d HOURS\n ",duration);
        printf("FEE AMOUNT : %.2f\n",fee);
    }
    return 0;
}




*/



/*
5

#include<stdio.h>
void car(int m){
    char vechile_number[m][20];
    char model[m][20];
    char fule_type[m][20];
    char rc_valid_up_to[m][20];
    char name_of_owner[m][20];
    char engine_number[m][20];
    char vechile_type[m][20];
    for(int i=0;i<m;i++){
        printf("ENTER THE CAR NUMBER : ");
        scanf(" %s",vechile_number[i]);
        printf("ENTER THE CAR MODAL NUMBER : ");
        scanf(" %s",model[i]);
        printf("ENTER THE CAR FUEL TYPE: ");
        scanf(" %s",fule_type[i]);
        printf("ENTER THE CAR RC VALID DATE : ");
        scanf(" %s",rc_valid_up_to[i]);
        printf("ENTER THE CAR OWNER NAME : ");
        scanf(" %s",name_of_owner[i]);
        printf("ENTER THE CAR ENGINE NUMBER : ");
        scanf(" %s",engine_number[i]);
        printf("ENTER THE CAR TYPE : ");
        scanf(" %s",vechile_type[i]);
    }	 	  	 	   	  	   	    	 	   	     	 	
    for(int i=0;i<m;i++){
        printf("THE CAR NUMBER : %s\n",vechile_number[i]);
        printf("THE CAR MODAL NUMBER : %s\n",model[i]);
        printf("THE CAR FUEL TYPE: %s\n",fule_type[i]);
        printf("THE CAR RC VALID DATE : %s\n",rc_valid_up_to[i]);
        printf("THE CAR OWNER NAME : %s\n",name_of_owner[i]);
        printf("THE CAR ENGINE NUMBER : %s\n",engine_number[i]);
        printf("THE CAR TYPE : %s\n",vechile_type[i]);
        
    }
    
}
void two_wheelers(int n){
    char vechile_number[n][20];
    char model[n][20];
    char fule_type[n][20];
    char rc_valid_up_to[n][20];
    char name_of_owner[n][20];
    char engine_number[n][20];
    char vechile_type[n][20];
    for(int i=0;i<n;i++){
        printf("ENTER THE TWO WHEELERS NUMBER : ");
        scanf(" %s",vechile_number[i]);
        printf("ENTER THE TWO WHEELERS MODAL NUMBER : ");
        scanf(" %s",model[i]);
        printf("ENTER THE TWO WHEELERS FUEL TYPE: ");
        scanf(" %s",fule_type[i]);
        printf("ENTER THE TWO WHEELERS RC VALID DATE : ");
        scanf(" %s",rc_valid_up_to[i]);
        printf("ENTER THE TWO WHEELERS OWNER NAME : ");
        scanf(" %s",name_of_owner[i]);
        printf("ENTER THE TWO WHEELERS ENGINE NUMBER : ");
        scanf(" %s",engine_number[i]);
        printf("ENTER THE TWO WHEELERS TYPE : ");
        scanf(" %s",vechile_type[i]);
    }	 	  	 	   	  	   	    	 	   	     	 	
    for(int i=0;i<n;i++){
        printf("THE TWO WHEELERS NUMBER : %s\n",vechile_number[i]);
        printf("THE TWO WHEELERS MODAL NUMBER : %s\n",model[i]);
        printf("THE TWO WHEELERS FUEL TYPE: %s\n",fule_type[i]);
        printf("THE TWO WHEELERS RC VALID DATE : %s\n",rc_valid_up_to[i]);
        printf("THE TWO WHEELERS OWNER NAME : %s\n",name_of_owner[i]);
        printf("THE TWO WHEELERS ENGINE NUMBER : %s\n",engine_number[i]);
        printf("THE TWO WHEELERS TYPE : %s\n",vechile_type[i]);
        
    }
}
int main(){
    int m,n;
    printf("ENTER THE NUMBER OF CARS : ");
    scanf("%d",&m);
    printf("ENTER THHE NUMBER OF TWO WHEELERS : ");
    scanf("%d",&n);
    car(m);
    two_wheelers(n);
    return 0;
    
}


*/

/*
6
#include<stdio.h>
//add two number using pointer
void add (int *num1,int *num2,int *sum) {
    *sum=*num1+*num2;
}
int main(){
    int num1,num2,sum;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d",&num1);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d",&num2);
    add(&num1,&num2,&sum);
    printf("SUM : %d\n",sum);
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	


*/











/*
7

#include<stdio.h>
void calculation(int *marks,int *total,float *average){
    *total=0;
    for(int i=0;i<5;i++){
        *total=*total+*(marks+i);
   }
    *average=*total/5;
}
int main(){
    int num ,total;
    float average;
    num=5;
    int marks[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d subject mark :",i+1);
        scanf("%d",&marks[i]);
    }
    calculation(marks,&total,&average);
    for(int i=0;i<num;i++){	 	  	 	   	  	   	    	 	   	     	 	
        printf("\nENTER THE %d subject mark :%d",i+1,marks[i]);
    }
    printf("\n\nTHE TOTAL OF ALL 5 SUBJECT MARKS ARE : %d\n",total);
    printf("THE AVERAGE OF ALL 5 SUBJECT MARKS ARE : %.2f\n",average);
    return 0;
}

*/
