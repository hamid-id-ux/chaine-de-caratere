#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char r;
    int i, comp = 0;

    printf("Entrez votre mot : ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    printf("Entrez le caractère à rechercher : ");
    scanf(" %c", &r);   

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == r) {
            comp++;
        }
    }

    printf("Le caractère %c apparaît %d fois  .\n", r, comp);

    return 0;
}
