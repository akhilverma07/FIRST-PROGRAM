/*
#include<stdio.h>
int main(){
//GROSS SALARY AND NET SALARY
    float basic_pay;
    printf("ENTER THE BASIC PAY : ");
    scanf("%f",&basic_pay);
    float da =(basic_pay+10/100);
    float hra =(basic_pay+12/100);
    float pf =(basic_pay+15/100);
    float gross_salary = basic_pay+hra+da+pf ;
    printf("THE GROSS SALARY IS : %.2f\n",gross_salary);
    float net_salary = gross_salary - pf ;
    printf("THE NET SALARY IS : %.2f\n",net_salary);
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    
    int num,sum1=0;
    cout<<"ENTER THE NUMBER : ";
    cin>>num;
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












/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER THE NUMBER : ";
    cin>>num;
    cin.ignore();
    string s[num];
    cout<<"ENTER THE STRING : \n";
    for(int i=0;i<num;i++){
        getline(cin,s[i]); 
    }
    cout<<"\nOUTPUT STRING :\n";
    for(int i=0;i<num;i++){
    cout<<s[i]<<endl;
    }
    return 0;
}
















#include<iostream>
using namespace std;
int main(){	 	  	 	   	  	   	    	 	   	     	 	
    string name;
    cout<<"ENTER THE NAME : ";
    getline(cin,name);
    string roll_number;
    cout<<"ENTER THE ROLL NUMBER : ";
    cin>>roll_number;
    int subject1,subject2,subject3;
    cout<<"ENTER THE SUBJECT 1 MARKS : ";
    cin>>subject1;
    cout<<"ENTER THE SUBJECT 2 MARKS : ";
    cin>>subject2;
    cout<<"ENTER THE SUBJECT 3 MARKS : ";
    cin>>subject3;
    float total =subject1+subject2+subject3;
    float average=total/3;
    cout<<"NAME OF STUDENT IS : "<<name<<endl;
    cout<<"ROLL NUMBER OF STUDENT IS : "<<roll_number;
    cout<<"\nAVERAGE OF STUDENT IS : "<<average<<endl;
    return 0;
}
*/