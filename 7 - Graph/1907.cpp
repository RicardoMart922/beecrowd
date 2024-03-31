#include <bits/stdc++.h>

using namespace std;

#define MAX 1050

char map_graph[MAX][MAX];
int n, m;
int vx[] = {1, -1, 0, 0};
int vy[] = {0, 0, -1, 1};

bool in_map(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && map_graph[i][j] == '.';
}

void dfs(int i, int j) {
    stack<pair<int, int>> s;
    s.push({i, j});

    while (!s.empty()) {
        tie(i, j) = s.top();
        s.pop();

        if (!in_map(i, j) || map_graph[i][j] != '.')
            continue;

        map_graph[i][j] = 'o';

        for (int x = 0; x < 4; x++) {
            s.push({i + vx[x], j + vy[x]});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> map_graph[i];

    int ans = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (map_graph[i][j] == '.') {
                ans++;
                dfs(i, j);
            }

    cout << ans << '\n';

    return 0;
}
