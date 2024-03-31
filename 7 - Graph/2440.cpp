#include <bits/stdc++.h>

using namespace std;

#define MAXN 100005

vector<int> grafo[MAXN];
bool visitados[MAXN];

void dfs(int x) { 
    visitados[x] = true;

    for (int i = 0; i < grafo[x].size(); i++) {
        int y = grafo[x][i];

        if (visitados[y] == false) {
            dfs(y);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int m, n;

    cin >> n >> m;

    int x, y;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;

        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }

    int numero_familias = 0;
    
    for (int i = 1; i <= n; i++) {
        if (visitados[i] == false) {
            dfs(i);
            numero_familias++;
        }
    }

    cout << numero_familias << '\n';

    return 0;
}