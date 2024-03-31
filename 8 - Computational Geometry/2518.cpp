#include <bits/stdc++.h>

using namespace std;

double pitagoras(int, int);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int qtde_degraus;
    int altura, comprimento, largura;

    while (cin >> qtde_degraus) {
        cin >> altura >> comprimento >> largura;

        double diagonal = pitagoras(altura, comprimento);

        cout << fixed << setprecision(4);
        cout << (diagonal * largura * qtde_degraus) / 10000 << '\n'; 
    }

    return 0;
}

double pitagoras(int altura, int comprimento) {
    double diagonal = (altura * altura) + (comprimento * comprimento);

    return sqrt(diagonal);
}