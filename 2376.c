#include <stdio.h>

int main() {
    char array1[8], array2[4], array3[2];
    char name = 'A';
    int t1, t2;

    for (int i = 0; i < 8; i++) {
        scanf("%d %d", &t1, &t2);

        if (t1 > t2) {
            array1[i] = name;
        } 
        else {
            array1[i] = name + 1;
        }
        name += 2;
    }

    for (int i = 0, j = 0; i < 4; i++, j += 2) {
        scanf("%d %d", &t1, &t2);

        if (t1 > t2) {
            array2[i] = array1[j];
        }
        else {
            array2[i] = array1[j+1];
        }

    }

    for (int i = 0, j = 0; i < 2; i++, j += 2) {
        scanf("%d %d", &t1, &t2);

        if (t1 > t2) {
            array3[i] = array2[j];
        }
        else {
            array3[i] = array2[j+1];
        }

    }
    
    scanf("%d %d", &t1, &t2);

    if (t1 > t2)
        printf("%c\n", array3[0]);
    else
        printf("%c\n", array3[1]);

    return 0;
}