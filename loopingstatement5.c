#include<stdio.h>
int main(){
//count number is postive
    int num;
    printf("ENTER THE NUMBER HOW MANY NUMBER WANT: ");
    scanf("%d",&num);
    int count=0;
    int count1=0;
    for(int i =1;i<=num;i++){
        int number;
        printf("ENTER THE %d NUMBER: ",i);
        scanf("%d",&number);
        if(number>=0){
            count+=1;
        }else{
            count1+=1;
        }
    }
    printf("THE TOTAL POSTIVE NUMBER IS: %d\n",count);
    printf("THE TOTAL NEGATIVE NUMBER IS: %d\n",count1);
    return 0;
}