#include<stdio.h>
int main(){
    char firstname[10],lastname[10];
    float weight,height,bmi;
    
    printf("ENTER THE FIRST NAME : ");
    scanf("%s",&firstname);
    printf("ENTER THE LAST NAME : ");
    scanf("%s",&lastname);
    printf("ENTER THE WEIGHT(kg) : ");
    scanf("%f",&weight);
    printf("ENTER THE height(m) : ");
    scanf("%f",&height);
    bmi = weight/(height*height);
    printf("\nName:%s %s\n",firstname,lastname);
    printf("BMI INDEX:%.2f\n",bmi);
    if(bmi<18.5){
        printf("Category: Underweight\n");
    }
    else if(bmi>=18.5 && bmi < 25){
        printf("Category: Normal(Healthy weight)\n");
    }
    else if(bmi>=25 && bmi < 30){
        printf("Category: Overweight\n");
    }
    else{
        printf("Category: Obese Class(Over 30)\n");
    }
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
