#include<stdio.h>
int main(){
    float unitPrice,revenue,discountRate;
    int quantity;
    printf("ENTER THE UNIT PRICE : ");
    scanf("%f",&unitPrice);
    printf("ENTER THE QUANTITY : ");
    scanf("%d",&quantity);
    revenue = unitPrice*quantity ;
    if (quantity < 100){
        discountRate=0;
    }
    else if (quantity >= 100 && quantity<=120){
        discountRate=.10;
    }
    else {
        discountRate=.15;
    }
    float discountAmount = revenue*discountRate;
    float discountRevenue = revenue - discountAmount;
    
    printf("THE REVENUE FROM SALE: %.1f$\n",revenue);
    printf("THE REVENUE AFTER DISCOUNT: %.1f$(%.1f%%)\n",discountAmount,discountRate*100);
    
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
