#include <stdio.h>
#include <string.h>

int main() {
    char text[100], rech[50];

    printf("Entrer une txt : ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; 

    printf("mot chercher : ");
    fgets(rech, sizeof(rech), stdin);
    rech[strcspn(rech, "\n")] = '\0';

    if (strstr(text, rech) != NULL) {
        printf(" trouve %s\n",rech);
    } else {
        printf("not trouve%s \n",rech);
    }

    return 0;
}
