
#include<stdio.h>
int main(){
// GRADE TABLE BY USER MARKS INPUT
    int marks;
    printf("ENTER THE MARKS : ");
    scanf("%d",&marks);
    if(marks >=90){
        printf(" MARKS    GRADE \n");
        printf(" %d         S",marks);
    }
    else if(marks >=80 && marks < 90){
        printf(" MARKS    GRADE \n");
        printf(" %d         A",marks);
    }
    else if(marks >=70 && marks < 80){
        printf(" MARKS    GRADE \n");
        printf(" %d         B",marks);
    }
    else if(marks >=60 && marks < 70){
        printf(" MARKS    GRADE \n");
        printf(" %d         C",marks);
    }
    else if(marks >=50 && marks < 60){
        printf(" MARKS    GRADE \n");
        printf(" %d         D",marks);
    }
    else
{
        printf(" MARKS    GRADE \n");
        printf(" %d         E",marks);
    }
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
