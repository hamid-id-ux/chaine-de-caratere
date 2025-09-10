#include<stdio.h>
#include<string.h>
int main(){

    char name[50];
    printf("enter votre nome :");
    fgets(name,sizeof(name),stdin);
    printf("name :%s",name);



    return 0;
}