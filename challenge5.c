#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    len = strlen(str);

    
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Chaine inversee : %s\n", str);

    return 0;
}
