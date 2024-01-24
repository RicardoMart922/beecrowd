#include <stdio.h>

int is_equal(int *array, int size) {
    for (int i = 1; i <= size; i++) {
        if (array[i-1] != i) 
            return 0;
    }
    return 1;
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        
        if (!n) break;

        int vetor[n], ans = 1;
        
        while (1) {
            for (int i = 0; i < n; i++) 
                scanf("%d", &vetor[i]);

            if (is_equal(vetor, n)) break;
            else ans += 1;
        }
        
        printf("%d\n", ans);
    }

    return 0;
}