/*
#include<stdio.h>
int main(){
//SWAP TWO NUMBER WITHOUT USING VARIABLE
    int a;
    printf("ENTER THE FIRST VALUE : ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE SECOND VALUE : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("THE SWAP VALUE IS :%d\n",a);
    printf("THE SWAP VALUE IS :%d\n",b);
    return 0;
}
*/
#include<stdio.h>
struct worker{
    char name[10];
    int hours;
}worker;

int main(){
    int num;
    printf("ENTER THE NUMBER OF WORKER : ");
    scanf("%d",&num);
    struct worker arr[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d WORKER NAME : ",i+1);
        scanf("%s",arr[i].name);
        printf("ENTER THE %d WORKER WORKING HOURS : ",i+1);
        scanf("%d",&arr[i].hours);
    }
    for(int i=0;i<num;i++){
        if(arr[i].hours ==5){	 	  	 	   	  	   	    	 	   	     	 	
            printf("NAME OF THE %d WORKER : %s\n",i+1,arr[i].name);
            printf("RECIEVED WAGES OF :RS 500");
        }
        else if(arr[i].hours ==6){
            printf("NAME OF THE %d WORKER : %s\n",i+1,arr[i].name);
            printf("RECIEVED WAGES OF :RS %d\n",(500+500*10/100));
        }
        else if(arr[i].hours ==7){
            printf("NAME OF THE %d WORKER : %s\n",i+1,arr[i].name);
            printf("RECIEVED WAGES OF :RS %d\n",(500+500*20/100));
        }
        else if(arr[i].hours ==8){
            printf("NAME OF THE %d WORKER : %s\n",i+1,arr[i].name);
            printf("RECIEVED WAGES OF :RS %d\n",(500+500*30/100));
        }
        else{
            printf("INVALID DETAILS");
        }
    }
    return 0;
}