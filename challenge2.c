#include<stdio.h>
#include<string.h>

int main(){
    

    char tab_size[50];
   


    printf("enter votre chaine de caractere :");
    fgets(tab_size,sizeof(tab_size),stdin);
      tab_size[strcspn(tab_size, "\n")]='\0'; 
       int size=strlen(tab_size);
    printf("la size de tableaux est:%d",size);

return 0;
}