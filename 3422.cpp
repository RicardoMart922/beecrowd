#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos_teste, minuto;
    int minuto_45, minuto_90, acrescimo;
    string tempo;
    cin >> casos_teste;
    while (casos_teste--) {
        cin >> minuto >> tempo;

        if (tempo == "2T") {
            minuto += 45;
            if (minuto > 90) {
                acrescimo = minuto - 90;
                minuto_90 = minuto - acrescimo;
                cout << minuto_90 << "+" << acrescimo << '\n';
            } 
            else 
                cout << minuto << '\n';
        } else {
            if (minuto > 45) {
                acrescimo = minuto - 45;
                minuto_45 = minuto - acrescimo;
                cout << minuto_45 << "+" << acrescimo << '\n';
            } 
            else 
                cout << minuto << '\n';
        }
    }
    return 0;
}