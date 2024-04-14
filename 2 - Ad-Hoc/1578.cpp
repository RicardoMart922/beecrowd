#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int qtde_matrizes, dimensao_matriz, numero_matrix = 4;
    int linha, coluna, qtde_digitos;
    long double maior_elemento_coluna;

    cin >> qtde_matrizes;

    while (qtde_matrizes--) {
        cin >> dimensao_matriz;

        long double matriz[dimensao_matriz][dimensao_matriz], elemento;

        for (linha = 0; linha < dimensao_matriz; linha++) {
            for (coluna = 0; coluna < dimensao_matriz; coluna++) {
                cin >> elemento;

                matriz[linha][coluna] = elemento * elemento;
            }
        }

        cout << "Quadrado da matrix #" << numero_matrix++ << ":\n";
        for (linha = 0; linha < dimensao_matriz; linha++) {
            for (coluna = 0; coluna < dimensao_matriz; coluna++) {
                maior_elemento_coluna = 0;

                for (int k = 0; k < dimensao_matriz; k++)
                    if (matriz[k][coluna] > maior_elemento_coluna)
                        maior_elemento_coluna = matriz[k][coluna];

                qtde_digitos = ((floor(log10(maior_elemento_coluna))) + 1);

                if (coluna != dimensao_matriz && coluna != 0)
                    cout << " ";

                printf("%*.Lf", qtde_digitos, matriz[linha][coluna]);
            }

            cout << '\n';
        }
       
        if (qtde_matrizes != 0)
            cout << '\n';
    }

    return 0;
}