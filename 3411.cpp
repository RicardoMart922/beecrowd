#include <iostream>

using namespace std;

#define TAM 10000

int mapa[TAM][TAM];
int valor = 10000000;

bool is_valid(int x, int y, int c, int l) {
    if ((x >= 1 && x <= c) && (y >= 1 && y <= l))
        return true;
    return false;
}

void pente(int x, int y, int c, int l, int n) {
    mapa[x][y] = n;

    if (is_valid(x+1, y, c, l) && (mapa[x+1][y] == valor))
        pente(x+1, y, c, l, n);

    if (is_valid(x-1, y, c, l) && (mapa[x-1][y] == valor))
        pente(x-1, y, c, l, n);

    if (is_valid(x, y+1, c, l) && (mapa[x][y+1] == valor))
        pente(x, y+1, c, l, n);

    if (is_valid(x, y-1, c, l) && (mapa[x][y-1] == valor))
        pente(x, y-1, c, l, n);
}

int main() {

    int c, l, x, y, n;

    cin >> c >> l;

    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= l; j++) {
            cin >> mapa[i][j];
        }
    }
    
    cin >> x >> y >> n;

    valor = mapa[x][y];
    pente(x, y, c, l, n);

    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= l; j++) {
            if (j == l)
                cout << mapa[i][j];
            else
                cout << mapa[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}