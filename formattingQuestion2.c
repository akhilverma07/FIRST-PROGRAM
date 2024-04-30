#include<stdio.h>
int main(){
// RADIUS , AREA of circle , CIRCUMFRENCE
    float pi = 3.1415;
    float radius ;
    printf("ENTER THE RADIUS :");
    scanf("%f",&radius);
    float area = pi*radius*radius ;
    float cir = 2*pi*radius ;
    printf("radius       area        circumfrence \n");
    printf("%.1f          %.2f        %.2f\n",radius,area,cir);
    return 0;
}