#include<stdio.h>
int fab(int n){
    int t1=0;
    int t2=1;
    int nextTerm=t1+t2;
    printf("FIBONACCI SERIES : %d %d ",t1,t2);
    for(int i=3;i<=n;i++){
        printf("%d ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}
int main(){
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    fab(n);
    return 0;
}