#include <stdio.h>

int main() {
    char input[55];

    while (scanf("%s", &input) != EOF) {
        int i = 0, flag = 0, array[5] = {0, 0, 0, 0, 0};

        while (input[i] != '-') {
            if ((input[i] == 'c' || input[i] == 'C') && !flag) {
                array[0] = 1;
                flag = 1;
            }
            i++;
        }
        i++;
        flag = 0;
        while (input[i] != '-') {
            if ((input[i] == 'o' || input[i] == 'O') && !flag) {
                array[1] = 1;
                flag = 0;
            }
            i++;
        }
        i++;
        flag = 0;
        while (input[i] != '-') {
            if ((input[i] == 'b' || input[i] == 'B') && !flag) {
                array[2] = 1;
                flag = 0;
            }
            i++;
        }
        i++;
        flag = 0;
        while (input[i] != '-') {
            if ((input[i] == 'o' || input[i] == 'O') && !flag) {
                array[3] = 1;
                flag = 0;
            }
            i++;
        }
        i++;
        flag = 0;
        while (input[i] != '-') {
            if ((input[i] == 'l' || input[i] == 'L') && !flag) {
                array[4] = 1;
                flag = 0;
            }
            i++;
        }

        if (array[0]+array[1]+array[2]+array[3]+array[4] == 5)
            printf("GRACE HOPPER\n");
        else
            printf("BUG\n");
    }

    return 0;
}