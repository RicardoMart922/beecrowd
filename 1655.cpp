#include <iostream>
#include <vector>
#include <limits>
#include <cmath>

#define INF 0
#define MAXN 110

using namespace std;

inline double max(double, double);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    while (true) {
        cin >> n;
        if (!n) break;
        cin >> m;

        double graph[MAXN][MAXN] = {{ INF }};
        
        while (m--) {
            int u, v, p;
            cin >> u >> v >> p;
            graph[u][v] = graph[v][u] = (p * 0.01);
        }

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j < n; ++j)
                for (int k = 1; k <= n; ++k)
                    graph[j][k] = max(graph[j][k], graph[j][i] * graph[i][k]);

        cout << fixed;
        cout.precision(6);
        cout << graph[1][n]*100 << " percent\n";
    }

    return 0;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}