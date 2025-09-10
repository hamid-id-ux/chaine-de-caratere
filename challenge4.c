#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    char word2[50];

    printf("enter le mot premier : ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    printf("enter deuxieme mot : ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';

    int comp=stricmp(word, word2);

    if (comp == 0) {
        printf("Les mots sont égaux \n");
    } else if (comp < 0) {
        printf("Le premier mot est avant le deuxième \n");
    } else {
        printf("Le premier mot est après le deuxième \n");
    }

    return 0;
}
