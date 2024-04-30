#include<stdio.h>
struct greenhouse{
    float temperature;
    char city[10];
};
int main(){
    int num;
    printf("ENTER THE NUMBER OF CITY : ");
    scanf("%d",&num);
    struct greenhouse arr[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d CITY TEMEPERATUR : ",i+1);
        scanf("%f",&arr[i].temperature);
        printf("ENTER THE %d CITY NAME : ",i+1);
        scanf("%s",arr[i].city);
    }
    float total=0;
     for(int i=0;i<num;i++){
         total +=arr[i].temperature;
    }
    int max_temperature_index=0;
    for(int i=0;i<num;i++){
        if(arr[i].temperature > arr[max_temperature_index].temperature){
          max_temperature_index=i;  
        }
    }
    int min_temperature_index=0;
    for(int i=0;i<num;i++){
        if(arr[i].temperature < arr[min_temperature_index].temperature){
          min_temperature_index=i;  
        }
    }
    
    
    float average=total/num;
    printf("THE MAXIMUM TEMPERATUR OF %.2f and CITY NAME IS %s \n",arr[max_temperature_index].temperature,arr[max_temperature_index].city);
    printf("THE Minimum TEMPERATUR OF %.2f and CITY NAME IS %s \n",arr[min_temperature_index].temperature,arr[min_temperature_index].city);
    printf("THE AVERAGE OF ALL CITY TEMPERATURE IS : %.2f\n",average);

//bubble sort 

for(int i=0;i<num-1;i++){	 	  	 	   	  	   	    	 	   	     	 	
    for(int j=0;j<num-i-1;j++){
        if(arr[j].temperature >arr[j+1].temperature){
            float tem=arr[j].temperature;
            arr[j].temperature =arr[j+1].temperature;
            arr[j+1].temperature =tem;
        }
    }
}

for(int i=0;i<num;i++){
    printf("%.2f  ",arr[i].temperature);
}
    return 0;
}
