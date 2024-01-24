#include <iostream>

using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string estado;
    string norte[] = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};

    getline(cin, estado);

    int flag = 0;
    for (string str: norte) {
        if (str == estado)
            flag = 1;
    }

    if (flag) cout << "Regiao Norte\n";
    else cout << "Outra regiao\n";
    
    return 0;
}