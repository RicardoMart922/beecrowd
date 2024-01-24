#include <cstdio>
#include <algorithm>

using namespace std;

#define MAXN 105

int ans, qtd_food;
char matrix[MAXN][MAXN];

void visited(char element) {
    if (element == 'A') 
        qtd_food = 0;
    else if (element == 'o')
        qtd_food++;

    ans = max(ans, qtd_food);
}

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &matrix[i][j]);
        }
    }

    ans = qtd_food = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                visited(matrix[i][j]);
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                visited(matrix[i][j]);
            }
        }
    }

    printf("%d\n", ans);


    return 0;
}