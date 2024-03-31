#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    string valor;
    char d;
    while(cin >> d >> valor && d != '0' && valor != "0") {
        string ans;
        for(int i=0; i<(int)valor.size(); i++){
            if(ans.size() == 0 && valor[i] != '0' && valor[i] != d) ans.push_back(valor[i]);
            else if(valor[i] != d) ans.push_back(valor[i]);
        }
        string aux = ans;
        ans = "";
        int i =0;
        while(aux[i] == '0' && i < (int)aux.size()) i++;
        for(; i<(int)aux.size(); i++) ans.push_back(aux[i]);
        cout << ((ans.size() == 0)? "0" : ans) << '\n';
    }
    return 0;
}