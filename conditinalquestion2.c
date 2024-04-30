#include<stdio.h>
int main(){
//NUMBER IS DIVISIBLE BY 3 OR 5;
    int number;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    if(number%3==0){
        if(number%5==0){
            printf("THE GIVEN NUMBER IS DIVISIBLE BY 3 AND 5");
        }
        else{
            printf("THE GIVEN NUMBER IS DIVISIBLE BY 3 ONLY and NOT DIVISIBLE BY 5");
        }
    }
    else if(number%5==0){
        printf("THE GIVEN NUMBER IS DIVISIBLE BY 5 BUT NOT 3");
    }
    else{
        printf("THE GIVEN NUMBER IS NOT DIVISIBLE BY 3 ");
    }
     return 0;
}
/*
#include<stdio.h>
int main(){
    int number;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    if(number % 3 ==0 && number %5 == 0){
        printf("THE GIVEN NUMBER IS DIVISIBLE BY 3 AND 5");
    }
    else{
        printf("THE GIVEN NUMBER IS NOT DIVISIBLE BY 3 AND 5");
    }
    
    
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
*/