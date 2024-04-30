#include<stdio.h>
int main(){
    int num;
    
    printf("ENTER THE NUMBER of ELEMENT: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    int num1;
    printf("ENTER THE NUMBER :");
    scanf("%d",&num1); 
    
    for(int i=0;i<num;i++){
        //printf("THE %d element of arr is :%d\n",i+1,arr[i]);
        if(num1==arr[i]){
            printf("THE INDEX IS %d \n",i);
        }
        
    }
    
    return 0;
}