#include<stdio.h>
int main(){
// FIND THE GREATEST IN 3 NUMBERS
   int num1,num2,num3 ;
   printf("ENTER FIRST THE NUMBER : ");
   scanf("%d",&num1);
   printf("ENTER SECOND THE NUMBER : ");
   scanf("%d",&num2);
   printf("ENTER THIRD THE NUMBER : ");
   scanf("%d",&num3);
   if(num1>num2){
       if(num1>num3){
           printf("THE GREATEST NUMBER IS %d\n",num1);
        }
        else{
            printf("THE GREATEST  NUMBER IS %d\n",num3);
        }
   }
    else if(num2>num3){
            printf("THE GREATEST NUMBER IS %d\n",num2);
        }
    else{
            printf("THE GREATEST NUMBER IS %d\n",num3);
        }
    return 0 ;  
   }
   
	 	  	 	   	  	   	    	 	   	     	 	
