#include<stdio.h>
struct student{
    int roll_number;
    char name[10];
    int age;
    float marks1;
    float marks2;
    float total;
};
void display(struct student g[2]){
for(int i=0;i<2;i++){
        printf("%d",g[i].roll_number);
        printf("\n%s",g[i].name);
        printf("\n%d",g[i].age);
        printf("\n%.2f",g[i].total);

    }
}
int main(){
    struct student s[2];
    for(int i=0;i<2;i++){
        scanf("%d",&s[i].roll_number);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].age);
        scanf("%f",&s[i].marks1);
        scanf("%f",&s[i].marks2);
        s[i].total=s[i].marks1+s[i].marks2;
        }
    printf("\n");
    display(s);
    
    

}