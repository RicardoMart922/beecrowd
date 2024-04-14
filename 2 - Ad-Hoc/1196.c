#include <stdio.h>
#include <string.h>

int main() {
    char keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char input[1000];

    while (fgets(input, 1000, stdin) != NULL) {
        int size = strlen(input);

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < 48; j++) {
                if (input[i] == keyboard[j]) {
                    printf("%c", keyboard[j - 1]);
                    break;
                }
                else if (input[i] == ' ') {
                    printf(" ");
                    break;
                }
                else if (input[i] == '\n') {
                    printf("\n");
                    break;
                }
            }
        }
    }

    return 0;
}