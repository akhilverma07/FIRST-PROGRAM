#include<stdio.h>
int main(){
// input ITEM NUMBER , ITEM NAME , QUANTITY PRICE
    int item_number1,item_number2,item_number3,quantity1,quantity2,quantity3;
    char item_name1[10],item_name2[10],item_name3[10];
    float price1,price2,price3,total_amount;
    
    printf("ENTER THE ITEM NUMBER 1: ");
    scanf("%d",&item_number1);
    printf("ENTER THE ITEM NAME 1: ");
    scanf("%s",&item_name1);
    printf("ENTER THE QUANTITY 1: ");
    scanf("%d",&quantity1);
    printf("ENTER THE PRICE OF ITEM 1: ");
    scanf("%f",&price1);
    
    printf("ENTER THE ITEM NUMBER 2 : ");
    scanf("%d",&item_number2);
    printf("ENTER THE ITEM NAME 2: ");
    scanf("%s",&item_name2);
    printf("ENTER THE QUANTITY 2: ");
    scanf("%d",&quantity2);
     printf("ENTER THE PRICE OF ITEM 2: ");
    scanf("%f",&price2);
    
    printf("ENTER THE ITEM NUMBER 3 : ");
    scanf("%d",&item_number3);
    printf("ENTER THE ITEM NAME 3: ");
    scanf("%s",&item_name3);
    printf("ENTER THE QUANTITY 3: ");
    scanf("%d",&quantity3);
    printf("ENTER THE PRICE OF ITEM 3 : ");
    scanf("%f",&price3);
    
    printf("item_number    item_name       quantity        price \n");
    printf("  %d              %s             %d                %.2f\n",item_number1,item_name1,quantity1,price1);
    printf("  %d              %s             %d               %.2f\n",item_number2,item_name2,quantity2,price2);
    printf("  %d              %s             %d              %.2f\n",item_number3,item_name3,quantity3,price3);
    
    total_amount = price1*quantity1+quantity2*price2+quantity3*price3 ;
    printf("\n            THE TOTAL AMOUNT OF ALL ITEM IS : %.2f\n",total_amount);
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	