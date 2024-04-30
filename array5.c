#include<stdio.h>
#include<string.h>
    int main(){
    int num;
    printf("ENTER THE NUMBER OF STUDENT: ");
    scanf("%d",&num);
    int regno[num];
    char name[num][50];
    char course[num][50];
    float cgpa[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d STUDENT REGISTRATION NUMBER :",i+1);
        scanf("%d",&regno[i]);
        printf("ENTER THE %d STUDENT NAME :",i+1);
        scanf("%s",name[i]);
        printf("ENTER THE %d STUDENT COURSE NAME :",i+1);
        scanf("%s",course[i]);
        printf("ENTER THE %d STUDENT CGPA :",i+1);
        scanf("%f",&cgpa[i]);
    }
    
    
    
    
    
    
    
    for(int i=0;i<num;i++){
        if(cgpa[i]>=9){
            printf("REGISTRATION NUMBER : %d\nNAME : %s\nSUBJECT : %s\n CGPA : %.2f\n ",regno[i],name[i],course[i],cgpa[i]);
        }
    }
    return 0;
}
   

    	 	  	 	   	  	   	    	 	   	     	 	
