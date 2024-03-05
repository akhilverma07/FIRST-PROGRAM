#include <stdio.h>
#include<string.h>
int invalidpan(char pan[]){
    if(strlen(pan[]) !=10){
        return 0;
    }
    for(int i=0;i<5;i++){
        if(!isupper(pan[i])){
            return 0;
        }
    }
    for(int i=5;i<9;i++){
        if(!isdigit(pan[i])){
            return 0;
        }
    }
    if(!isupper(pan[9])){
        return 0;
    }
    return 1;
}
int main(){
    char pan[11];
    printf("ENTER THE PAN CARD NUMBER : ");
    scanf("%s",pan);
    if(isvalidpan(pan)){
        printf("VALID PAN CARD NUMBER");
    }else{
        printf("INVALID PAN CARD NUMBER");
    }
    return 0;
}
