#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, flag = 1;
    map<string, string> mapa;

    cin >> n;
    cin.ignore();

    string str, chave, valor;
    for (int i = 0; i < 2*n; i++) {
        getline(cin, str);
                
        if (flag == 1)
            chave = str;
        
        if (flag == 2) {
            valor = str;
            mapa[chave] = valor;
            
            flag = 0;
        }
        flag++;
    }

    cin >> m;
    cin.ignore();
    
    flag = 1;
    for (int i = 0; i < 2*m; i++) {
        getline(cin, str);
                
        if (flag == 1)
            cout << str << '\n';
        
        if (flag == 2) {
            cout << mapa[str] << '\n';
            cout << '\n';
            
            flag = 0;
        }
        flag++;
    }
    
    return 0;
}