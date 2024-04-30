#include<stdio.h>
int main(){
    int initialPopulation=9870;
    float annualIncrease=.10;
    int targetPopulation = 30000;
    int currentPopulation = initialPopulation;
    int countYears=0;
    while(currentPopulation < targetPopulation){
        currentPopulation +=currentPopulation*annualIncrease;
        countYears++;
        printf("Year %d: Population = %d\n",countYears,currentPopulation);
    }printf("It will take %d years for the population to surpass %d .",countYears,targetPopulation);
    return 0;
}