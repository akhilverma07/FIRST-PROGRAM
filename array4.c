#include<stdio.h>
int main(){
    int num;
    int max,smax;
    int min;
    printf("ENTER THE NUMBER SUBJECT: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d SUBJECT MARKS :",i+1);
        scanf("%d",&arr[i]);
    }
    max=smax=arr[0];
    for(int i=0;i<num;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i] != max){
            smax=arr[i];
        }
    }
    min=arr[0];
    for(int i=0;i<num;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("THE HIGHEST MARK IS :%d\n",max);
    printf("THE SECOND HIGHEST MARK IS :%d\n",smax);
    printf("THE LOWEST MARK IS :%d\n",min);
    return 0;
}



	 	  	 	   	  	   	    	 	   	     	 	
