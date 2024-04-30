/*
#include<stdio.h>
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
    float si = (principle*rate*years)/100 ;
    printf("SIMPLE INTEREST IS %.2f\n",si);
    return 0 ;
}
*/
#include<stdio.h>
#include<string.h>

struct player{
    char player_name[20];
    int score;
}player;
int main(){
    int num;
    printf("ENTER THE NUMBER OF PLAYER : ");
    scanf("%d",&num);
    struct player players[num];
    for(int i=0;i<num;i++){
        printf("ENTER THE %d PLAYER NAME : ",i+1);
        scanf("%s",players[i].player_name);
        printf("ENTER THE SCORE OF %d PLAYER : ",i+1);
        scanf("%d",&players[i].score);
    }
    int max_score_index =0;
    int total=0;
    for(int i=0;i<num;i++){	 	  	 	   	  	   	    	 	   	     	 	
        printf("THE %d PLAYER NAME IS :%s\n",i+1,players[i].player_name);
        printf("THE SCORE OF %d PLAYER IS : %d\n",i+1,players[i].score);
        total +=players[i].score ;
        if(players[i].score > players[max_score_index].score){
            max_score_index = i;
       }
    }
    printf("\nTOTAL RUN SCORED BY TEAM IS : %d\n",total);
    printf("THE MAN OF THE MATCH IS : %s\n",players[max_score_index].player_name);
    return 0;
}