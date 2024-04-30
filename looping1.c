#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE NUMBER HOW MANY NUMBER YOU WANT : ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d ELEMENT : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("THE STORAGE ARRAY IS : ");
    for(int i=0;i<num;i++){
        printf(" %d",arr[i]);
    }
    printf("\nTHE REVERSE ARRAY IS : ");
    for(int i=num-1;i>=0;i--){
        printf(" %d",arr[i]);
        }
    return 0;
}