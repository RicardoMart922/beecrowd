#include <bits/stdc++.h>

using namespace std;

#define LINHAS 105
#define COLUNAS 105

char matriz[LINHAS][COLUNAS];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n, m, a, b;

    while (1) {
        cin >> n >> m;

        if (!n && !m) break;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> matriz[i][j];

        cin >> a >> b;

        for (int i = 1; i <= n; i++) {
            for(int k = 0; k < (int) a/n; k++) {
                for (int j = 1; j <= m; j++) {
                    for (int l = 0; l < (int) b/m; l++)
                        cout << matriz[i][j];
                }
                cout << '\n';
            }
        }
        cout << '\n';
    }

    return 0;
}