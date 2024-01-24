#include <stdio.h>

#define MAX 1040

char grid[MAX][MAX];

void bfs(int x, int y) {
    grid[x][y] = 'o';

    if (grid[x+1][y] == '.') bfs(x+1, y);
    if (grid[x-1][y] == '.') bfs(x-1, y);
    if (grid[x][y+1] == '.') bfs(x, y+1);
    if (grid[x][y-1] == '.') bfs(x, y-1);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%s", &grid[i][1]);

    int ans = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (grid[i][j] == '.') {
                bfs(i, j);
                ans++;
            }

    printf("%d\n", ans);

    return 0;
}