#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define INF (1e9 + 10)

using namespace std;

typedef pair<int, int> pii;

int dijkstra(vector<pair<int, int>> graph[], int s, int n) {
    bool visited[n + 1];
    int distance[n + 1];

    for (int i = 1; i <= n; i++) {
        distance[i] = INF;
        visited[i] = false;
    }

    distance[s] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.push({0, s});

    while (!fila.empty()) {
        int u = fila.top().second;
        fila.pop();

        if (visited[u]) continue;

        visited[u] = true;

        for (auto v : graph[u]) {
            int x = v.first, y = v.second;

            if (distance[x] > distance[u] + y) {
                distance[x] = distance[u] + y;
                fila.push({distance[x], x});
            }
        }
    }

    int bigger = 0, smaller = INF;
    for (int i = 1; i <= n; i++) {
        if (distance[i] > bigger) bigger = distance[i];
        if (i != s && distance[i] < smaller) smaller = distance[i];
    }

    return (bigger - smaller);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> graph[n + 5];

    for (int i = 1; i <= m; ++i) {
        int u, v, p;
        cin >> u >> v >> p;

        graph[u].push_back({v, p});
        graph[v].push_back({u, p});
    }

    int s;
    cin >> s;

    cout << dijkstra(graph, s, n) << '\n';

    return 0;
}
