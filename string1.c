#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    char str2[100];
    printf("ENTER THE SRING :");
    fgets(str,sizeof(str),stdin);
    
    strcpy(str2,str);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]=='\0' ;
    
    int i,j ;
    for(i=0,j=strlen(str2)-1;i<j;i++,j--){
        char temp = str2[i];
        str2[i]=str2[j];
        str2[j]=temp;
    }

    if (strcmp(str,str2)==0){
        printf("PALINDROME");
    }
    else{
        printf("NOT A PALINDROME");
    }
    return 0;
}	 	  	 	   	  	   	    	 	   	     	 	
