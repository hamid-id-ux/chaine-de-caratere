#include<stdio.h>
#include<string.h>
int main(){

    char name[50];
    int lenght=0;
    printf("enter votre nome :");
    fgets(name,sizeof(name),stdin);

    name[strcspn(name,"\n")]='\0';

    while(name[lenght]!=0){

        lenght++;
    }
    printf("size est :%d",lenght);



    return 0;
}