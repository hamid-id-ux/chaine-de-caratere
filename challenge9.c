#include<stdio.h>
#include<string.h>

int main(){

   char txt[50];
   char sp=' ';
  



printf("enter une txt : ");
   fgets(txt,sizeof(txt),stdin);
   txt[strcspn(txt,"\n")]='\0';
   int lenght =strlen(txt);

   for(int i=0;i<lenght;i++){
    if(txt[i]!= sp){

    printf("%c",txt[i]);

}

}
}


   






