#include <stdio.h>
#include <string.h>
#include <ctype.h>  // pour toupper()

int main() {
    char texte[100];
    int i;

    printf("Entrez une text  : ");
    fgets(texte, sizeof(texte), stdin);

    
    for (i = 0; texte[i] != '\0'; i++) {
        texte[i] = toupper(texte[i]);
    }

    printf("Texte en majuscules : %s\n", texte);

    return 0;
}
