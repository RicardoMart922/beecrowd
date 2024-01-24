#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int h, p, f;

    while (1) {
        cin >> h >> p >> f;

        if (!h && !p && !f) break;

        int pilhas[h][p], item;
        queue<int> fila;

        for (int i = 0; i < h; i++)
            for (int j = 0; j < p; j++)
                cin >> pilhas[i][j];
        
        for (int i = 0; i < f; i++) {
            cin >> item;
            fila.push(item);
        }
        
        for (int j = p-1; j >= 0; j--)
            for (int i = h - 1; i >= 0; i--) {
                if (pilhas[i][j] == 0) {
                    pilhas[i][j] = fila.front();
                    fila.pop();
                }

                if (fila.empty()) break;
            }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < p; j++) {
                if (j+1 == p)
                    cout << pilhas[i][j] << '\n';
                else
                    cout << pilhas[i][j] << ' ';
            }
        }

    }

    return 0;
}