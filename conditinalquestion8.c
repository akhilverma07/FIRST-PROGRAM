#include<stdio.h>
int main(){
    int num1,num2,c,d,e,f,g,oper ;
    printf("ENTER FIRST THE NUMBER : ");
    scanf("%d",&num1);
    printf("ENTER SECOND THE NUMBER : ");
    scanf("%d",&num2);
    printf("ENTER OPERATOR: 1 for add, 2 for substration, 3 for multiply, 4 for divide, 5 for reminder : ");
    scanf("%d",&oper);
    switch(oper){
        case 1:
            c= num1 + num2 ;
            printf("THE ADDITION OF TWO NUMBER IS :%d",c);
            break;
        case 2:
            d= num1 - num2 ;
            printf("THE SUBSTRATION OF TWO NUMBER IS :%d",d);
            break;
        case 3:
            e= num1*num2 ;
            printf("THE MULTIPLICATION OF TWO NUMBER IS :%d",e);
            break;
        case 4:
            f=num1/num2 ;
            printf("THE DIVISION OF TWO NUMBER IS :%d",f);
            break;
        case 5:
            g= num1%num2 ;
            printf("THE REMINDER OF TWO NUMBER IS :%d",g);
            break;
        default:
        printf("INVALID");
        
    }
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
