#include<stdio.h>
int smi(float principle,float rate,float years){
    float si = (principle*rate*years)/100 ;
    printf("SIMPLE INTEREST IS %.2f\n",si);
    return 0 ;
}
int main(){
    float principle;
    printf("ENTER THE PRINCIPLE VALUE : ");
    scanf("%f",&principle);
    float rate;
    printf("ENTER THE RATE VALUE : ");
    scanf("%f",&rate);
    float years;
    printf("ENTER THE YEARS: ");
    scanf("%f",&years);
    smi(principle,rate,years);
    return 0 ;
}