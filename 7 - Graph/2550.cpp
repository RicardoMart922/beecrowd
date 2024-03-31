#include <bits/stdc++.h>

using namespace std;

void add_edge(vector<pair<int, int>> graph[], int x, int y, int v) {
    graph[x].push_back(make_pair(y, v));
    graph[y].push_back(make_pair(x, v));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number_vertices, number_edges;
    
    while (cin >> number_vertices >> number_edges) {

        vector<pair<int, int>> graph[number_vertices];
        vector<bool> visited(number_vertices, false);
        priority_queue<pair<int, int>> prim_queue;

        int origin, destiny, weight;
        for (int i = 0; i < number_edges; i++) {
            cin >> origin >> destiny >> weight;
            add_edge(graph, origin-1, destiny-1, weight);
        }

        visited[0] = true;
        for (pair<int, int> edge: graph[0])
            prim_queue.push(make_pair(-edge.second, edge.first));

        int ans = 0;
        while (prim_queue.size()) {
            pair<int, int> min = prim_queue.top();
            prim_queue.pop();

            if (visited[min.second]) continue;

            ans += -min.first;

            visited[min.second] = true;
            for (pair<int, int> edge: graph[min.second]) 
                prim_queue.push(make_pair(-edge.second, edge.first));
        }

        bool flag;
        for (auto item: visited) {
            if (!item) {
                flag = false;
                break;
            }
            flag = true;
        } 

        if (flag)
            cout << ans << '\n';
        else
            cout << "impossivel" << '\n';
    }

    return 0;
}