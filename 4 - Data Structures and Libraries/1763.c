#include <stdio.h>
#include <string.h>

int main() {
    char entrada[1001];

    while (scanf("%s", entrada) != EOF) {

        if (!strcmp(entrada, "irlanda"))
            printf("Nollaig Shona Dhuit!\n");
        else if (!strcmp(entrada, "belgica"))
            printf("Zalig Kerstfeest!\n");
        else if (!strcmp(entrada, "suecia"))
            printf("God Jul!\n");
        else if (!strcmp(entrada, "alemanha"))
            printf("Frohliche Weihnachten!\n");
        else if (!strcmp(entrada, "austria"))
            printf("Frohe Weihnacht!\n");
        else if (!strcmp(entrada, "coreia"))
            printf("Chuk Sung Tan!\n");
        else if (!strcmp(entrada, "grecia"))
            printf("Kala Christougena!\n");
        else if (!strcmp(entrada, "turquia"))
            printf("Mutlu Noeller\n");
        else if (!strcmp(entrada, "japao"))
            printf("Merii Kurisumasu!\n");
        else if (!strcmp(entrada, "brasil") || !strcmp(entrada, "portugal"))
            printf("Feliz Natal!\n");
        else if (!strcmp(entrada, "estados-unidos") || !strcmp(entrada, "inglaterra") || !strcmp(entrada, "australia") || !strcmp(entrada, "antardida") || !strcmp(entrada, "canada"))
            printf("Merry Christmas!\n");
        else if (!strcmp(entrada, "espanha") || !strcmp(entrada, "argentina") || !strcmp(entrada, "chile") || !strcmp(entrada, "mexico"))
            printf("Feliz Navidad!\n");
        else if (!strcmp(entrada, "siria") || !strcmp(entrada, "marrocos"))
            printf("Milad Mubarak!\n");
        else if (!strcmp(entrada, "italia") || !strcmp(entrada, "libia"))
            printf("Buon Natale!\n");
        else
            printf("--- NOT FOUND ---\n");
    }

    return 0;
}