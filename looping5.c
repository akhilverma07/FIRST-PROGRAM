#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE FIVE DIGIT NUMBER : ");
    scanf("%d",&num);
    if(num>=10000 && num<=99999){
        int a =num/10000;
        int b =(num/1000)%10;
        int c =(num/100)%10;
        int d =(num/10)%10;
        int e = num%10;
        if(a+b+c ==d+e){
            printf("THE GIVEN NUMBER IS LUCKY NUMBER");
        }else{
            printf("THE GIVEN NUMBER IS NOT LUCKY NUMBER");
        }
    }else{
        printf("PLEASE ENTER FIVE DIGIT NUMBER\n");
    }
    return 0;
}


/* 

 int num;
    printf("ENTER THE FIVE DIGIT NUMBER : ");
    scanf("%d",&num);
    int e = num%10;
    int d=num-e;
    d=d/10;
    d=d%10;
    int c=num-d;
    c=c/100;
    c=c%10;
    int b=num-c;
    b=b/1000;
    b=b%10;
    int a=num-b;
    a=a/10000;
    a=a%10;
    printf("1st digit is: %d\n",a);
    printf("2st digit is: %d\n",b);
    printf("3st digit is: %d\n",c);
    printf("4st digit is: %d\n",d);
    printf("5st digit is: %d\n",e);
    printf("THE GIVEN NUMBER IS :%d\n",num);
    int f=a+b+c ;
    int g =d+e ; 
    if(f==g){	 	  	 	   	  	   	    	 	   	     	 	
        printf("THE GIVEN NUMBER IS LUCKY NUMBER");
    }
    else{
        printf("THE GIVEN NUMBER IS NOT LUCKY NUMBER");
    }

*/




