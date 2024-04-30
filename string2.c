#include<stdio.h>
#include<string.h>
#define student 5
#define maxchar 20
int main(){
    char String[student][maxchar];
    char dummy[maxchar];
    int i=0;
    int j=0;
    printf("ENTER THE %d STUDENT NAME:\n",student);
    while(i<student){
        scanf("%s",String[i++]);
    }
    for(i=1;i<student;i++){
        for(j=1;j<=student-i;j++){
            if(strcmp(String[j],String[j+1])>0) {
                strcpy(dummy,String[j]);
                strcpy(String[j],String[j+1]);
                strcpy(String[j+1],dummy);
            }
        }
    }
    printf("ALPHABETICAL LIST \n");
    for(i=0; i<student; i++) {
        printf("%s\n",String[i]);
    }
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
