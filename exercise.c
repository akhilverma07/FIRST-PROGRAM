#include<stdio.h>
// C is case sensative langauage
int main(){
    printf("HELLO WORLD !!\n");
    //data type
    int number = 25;
    char star = '*';
    int age = 34;
    float pi = 3.1415;
    int Age = 32;
    double paa= 3.453256777;
    age=24;
    //update variable value
    //output 
    printf("%d\n",age);
    printf("%f\n",pi);
    printf("%c\n",star);
    //input and add two number
    /*
    int num;
    scanf("%d",&num);
    printf("%d\n",num);
    int num1;
    scanf("%d",&num1);
    printf("%d\n",num1);
    int sum=num+num1;
    printf("%d\n",sum);

//Calculate area of  a square
   int side;
   printf("Enter the side : ");
   scanf("%d",&side);
   int area=side*side;
   printf("AREA OF SQUAE IS : %d\n",area);
*/
  
    int num;
    
    scanf("%d",&num);
    int num1=num;
    int count=0;
    while(num!=0){
        num=num/10;
        count++;
        }
    
    int sum=0;
    while(num1>0){
        int reminder=num1%10;
        
        num1=num1-reminder;

        num1 /=10;
        sum +=pow(reminder,count);
    }

    return 0;
}