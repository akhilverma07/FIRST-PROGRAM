#include<stdio.h>
int main(){
    char choice;
    do {
      int num1,num2,sum;
      printf("ENTER THE FIRST NUMBER  : ");
      scanf("%d",&num1);
      printf("ENTER THE SECOND NUMBER : ");
      scanf("%d",&num2);
      sum=num1+num2;
      printf("Sum: %d\n",sum);
      printf("Do you want add more number?(Y/N): ");
      scanf(" %c",&choice);
    } while (choice=='y'|| choice=='Y');
    
    printf("Program excited Goodbye!\n");
    return 0;
}