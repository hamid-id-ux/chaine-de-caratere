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

    strcat(word, word2);

    printf("Les mots collés : %s\n", word);

    return 0;
}
