/*
#include<stdio.h>
int main(){
// AREA OF SQUARE
    float side;
    printf("ENTER THE SIDE : ");
    scanf("%f",&side);
    float square = side*side ;
    printf("THE AREA OF SQUARE IS : %.2f\n",square);
//AREA OF RECTANGLE
    float length;
    printf("ENTER THE LENGTH : ");
    scanf("%f",&length);
    float width;
    printf("ENTER THE WIDTH : ");
    scanf("%f",&width);
    float rectangle = length*width ;
    printf("THE AREA OF RECTANGLE IS : %.2f\n",rectangle);
// AREA OF TRIANGLE
    float base;
    printf("ENTER THE BASE : ");
    scanf("%f",&base);
    float hight;
    printf("ENTER THE HIGHT : ");
    scanf("%f",&hight);
    float triangle = (base*hight)/2 ;
    printf("THE AREA OF TRIANGLE IS : %.2f\n",triangle);
    return 0;
}


#include<stdio.h>
void detail(int itemid[5],int quantity[5],int per_item_cost[5],int total){
     for (int i=0;i<5;i++){
        printf("ENTER THE %d ITEM ID : ",i+1);
        scanf(" %d",&itemid[i]);
        printf("ENTER THE %d ITEM QUANTITY : ",i+1);
        scanf(" %d",&quantity[i]);
        printf("ENTER THE %d ITEM COST : ",i+1);
        scanf(" %d",&per_item_cost[i]);
    }	 	  	 	   	  	   	    	 	   	     	 	
    for (int i=0;i<5;i++){
        total +=per_item_cost[i]*quantity[i];
    }
    printf("itemid    quantity   per_item_cost   total_cost\n");
    for (int i=0;i<5;i++){
        printf("%d           %d            %d               %d\n",itemid[i],quantity[i],per_item_cost[i],(per_item_cost[i]*quantity[i]));
    }
    printf("THE TOTAL COST OF ALL ITEM IS %d",total);
    return ;
}
int main(){
    int total=0;
    int itemid[5],quantity[5],per_item_cost[5];
    detail(itemid,quantity,per_item_cost,total);
    return 0; 
}


//pan card check code
#include <stdio.h>
#include<string.h>
int invalidpan(char pan[]){
    if(strlen(pan[]) !=10){
        return 0;
    }
    for(int i=0;i<5;i++){
        if(!isupper(pan[i])){
            return 0;
        }
    }
    for(int i=5;i<9;i++){
        if(!isdigit(pan[i])){
            return 0;
        }
    }
    if(!isupper(pan[9])){	 	  	 	   	  	   	    	 	   	     	 	
        return 0;
    }
    return 1;
}
int main(){
    char pan[11];
    printf("ENTER THE PAN CARD NUMBER : ");
    scanf("%s",pan);
    if(isvalidpan(pan)){
        printf("VALID PAN CARD NUMBER");
    }else{
        printf("INVALID PAN CARD NUMBER");
    }
    return 0;
}



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




#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>number1;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>number2;
    cout<<"ENTER THE THIRD NUMBER : ";
    cin>>number3;
    if(number1>number2){
        if(number1>number3){
        cout<<"FIRST NUMBER IS GREATEST\n";
        }
        else{
            cout<<"THIRD NUMBER IS GREATEST\n";
        }
    }else{
        if(number2>number3){
            cout<<"SECOND NUMBER IS GREATEST\n";
        }	 	  	 	   	  	   	    	 	   	     	 	
        else{
            cout<<"THIRD NUMBER IS GREATEST \n";
        }
    }
    
    int num,sum1=0,sum=0;
    cout<<"ENTER THE NUMBER : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
        sum +=i;
    }
    cout<<"\nTHE SUM OF UPTO GIVEN NUMBER IS : "<<sum<<endl;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"ENTER THE ELEMENT : ";
        cin>>arr[i];
        sum1 +=arr[i];
    }
    for(int i=0;i<num;i++){
        cout<<"\nTHE ELEMENT OF ARRAY IS : "<<arr[i];
        
    }
    cout<<"\nTHE SUM OF UPTO GIVEN NUMBER IS : "<<sum1;
    return 0;
}
*/
	 	  	 	   	  	   	    	 	   	     	 	
