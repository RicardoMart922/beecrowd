#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph(1000001);

bool bfs(int start, int target, int size, vector<int> &dist) {
    vector<bool> visited(size, false);
    list<int> queue;

    visited[start] = true;
    queue.push_back(start);
    dist[start] = 0;

    while (!queue.empty()) {
        start = queue.front();
        queue.pop_front();

        for (int i = 0; i < graph[start].size(); ++i) {
            if (!visited[graph[start][i]]) {
                visited[graph[start][i]] = true;
                dist[graph[start][i]] = dist[start] + 1;
                queue.push_back(graph[start][i]);
                   
                if (graph[start][i] == target) {
                    return true;
                }
            }
        }
    }

    return false;
}

void print_ans(int start, int target, int size) {
    vector<int> dist(size, INT_MAX);
 
    if(!bfs(start, target, size, dist)) {
        cout << "use the stairs\n";
        return;
    }

    cout << dist[target] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int qtd_vertices, start, target, up, down;
    cin >> qtd_vertices >> start >> target >> up >> down;

    for (int i = 1; i <= qtd_vertices; i++) {
        if (i + up <= qtd_vertices)
            graph[i].push_back(i+up);

        if (i - down >= 1) 
            graph[i].push_back(i-down);
    }

    if (start == target) cout << "0\n";
    else print_ans(start, target, qtd_vertices+1);

    return 0;
}