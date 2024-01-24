#include <stdio.h>
#include <string.h>

typedef struct {
    int accepted;
    int time;
    int penalty;
} Problem;

void initialization(Problem *array) {
    for (int i = 'A'; i <= 'Z'; i++) {
        array[i].accepted = 0;
        array[i].time = 0;
        array[i].penalty = 0;
    }
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (!n) break;

        Problem array[100];
        initialization(array);

        char id, verdict[30];
        int time;
        for (int i = 0; i < n; i++) {
            scanf(" %c %d %s", &id, &time, verdict);

            array[id].time = time;
            if (!strcmp(verdict, "incorrect")) {
                array[id].penalty += 20;
                array[id].accepted = 0;
            } else
                array[id].accepted = 1;
        }

        int sum = 0;
        int qtde_accepted = 0;
        for (int i = 'A'; i <= 'Z'; i++) {
            if (array[i].accepted) {
                qtde_accepted++;
                sum += (array[i].time + array[i].penalty);
            }
        }

        printf("%d %d\n", qtde_accepted, sum);
    }

    return 0;
}
