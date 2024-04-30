#include<stdio.h>
int main(){
    int num;
    int arr[num];
    printf("ENTER THE NUMBER of ELEMENT: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("ENTER THE %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        printf("THE %d element of arr is :%d\n",i+1,arr[i]);
        
    }
    
    return 0;
}