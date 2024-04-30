#include<stdio.h>
int main(){
    char operator,choice;
    int num1,num2,result;
    do{
        printf("ENTER THE OPERATOR  : ");
        scanf("%s",&operator);
        printf("ENTER THE FIRST NUMBER  : ");
        scanf("%d",&num1);
        printf("ENTER THE SECOND NUMBER : ");
        scanf("%d",&num2);
        switch(operator){
            case'+':
            result=num1+num2;
            break;
            case'-':
            result=num1-num2;
            break;
            case'*':
            result=num1*num2;
            break;
            case'/':
            result=num1/num2;
            break;
            case'%':
            result=num1%num2;
            break;
            default:
            printf("INVALID OPERATOR \n");
        }
            printf("THE RESULT IS %d\n",result);
            printf("Do you want reminder more number?(Y/N): ");
            scanf(" %c",&choice);
            }while (choice=='y'|| choice=='Y');
            printf("Program excited Goodbye!\n");
    return 0;
    }	 	  	 	   	  	   	    	 	   	     	 	

