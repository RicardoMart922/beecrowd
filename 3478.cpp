#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define left(x) (2*x)
#define right(x) (2*x + 1)
    
#define MAXN 100005

vi grafo[MAXN];
bool visitados[MAXN];

void addEdge(int origem, int destino) {
    grafo[origem].push_back(destino);
    grafo[destino].push_back(origem);
}

void dfs(int elemento) { 
    visitados[elemento] = true;
    for (int i = 0; i < grafo[elemento].size(); i++) {
        int ilha = grafo[elemento][i];
        if (visitados[ilha] == false) {
            dfs(ilha);
        }
    }
}

int main(){
    fast
    int c, f, a, b, qtde = 0;
    cin >> c >> f;
    for (int i = 1; i <= f; i++) {
        cin >> a >> b;
        addEdge(a, b);
    }
    for (int i = 1; i <= c; i++) {
        if (visitados[i] == false) {
            dfs(i);
            qtde++;
        }
    }
    cout << qtde << '\n';
    return 0;
}