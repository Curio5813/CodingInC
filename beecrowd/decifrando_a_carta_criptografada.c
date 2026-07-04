#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){

    int c, n, m, tam, cont;

    char cifra[22], cifrada[22], texto1[101], texto2[101];

    while(scanf("%d %d", &c, &n) != EOF) {
        scanf("%s", &cifra);
        scanf("%s", &cifrada);
        getchar();
        for (int i = 0; i < n; i++) {
            cont = 0;
            fgets(texto1, sizeof(texto1), stdin);
            tam = strlen(texto1);
            for(int k = 0; k < tam + 1; k++){
                texto2[k] = toupper(texto1[k]);
            }
            for(int k = 0; k < tam; k++) {
                for (int j = 0; j < c; j++) {
                    if (texto2[k] == cifrada[j] && isupper(texto1[k])) {
                        printf("%c", cifra[j]);
                        cont = 1;
                        break;
                    }
                    if (texto2[k] == cifrada[j] && islower(texto1[k])) {
                        printf("%c", tolower(cifra[j]));
                        cont = 1;
                        break;
                    }
                    if (texto2[k] == cifra[j] && isupper(texto1[k])) {
                        printf("%c", cifrada[j]);
                        cont = 1;
                        break;
                    }
                    if (texto2[k] == cifra[j] && islower(texto1[k])) {
                        printf("%c", tolower(cifrada[j]));
                        cont = 1;
                        break;
                    } else {
                        if (texto2[k] == cifrada[j]) {
                            printf("%c", tolower(cifra[j]));
                            cont = 1;
                            break;
                        }
                        if (texto2[k] == cifra[j]) {
                            printf("%c", tolower(cifrada[j]));
                            cont = 1;
                            break;
                        }
                    }
                }
                if (cont == 0 && isupper(texto1[k])) {
                    printf("%c", texto2[k]);
                    cont = 1;
                }
                if (cont == 0 && islower(texto1[k])) {
                    printf("%c", tolower(texto2[k]));
                    cont = 1;
                } else {
                    if (cont == 0) {
                        printf("%c", texto2[k]);
                        cont = 1;
                    }
                }
                cont = 0;


            }
        }
    }
    return 0;
}