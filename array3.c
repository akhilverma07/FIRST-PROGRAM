#include<stdio.h>
int main(){
    int num ,sum=0;
    printf("ENTER THE NUMBER of ELEMENT: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d element :",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int mean = sum/num;
    printf("MEAN :%d\n",mean);
    printf(" SNO         ELEMENT        DIFFERENCE\n");
    for(int i=0;i<num;i++){
        int n =arr[i];
        int diff = n-mean;
        printf(" %d            %d              %d\n",i,arr[i],diff);
    }
    return 0;
}