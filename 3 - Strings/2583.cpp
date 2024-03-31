#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int c;

        cin >> c;
        cin.ignore();
        
        set<string> conjunto;
        string str1, str2;
        for (int i = 0; i < c; i++) {
            cin >> str1 >> str2;

            if (str2 == "chirrin") {
                conjunto.insert(str1);
            } 
            else if (str2 == "chirrion") {
                set<string>::iterator it = conjunto.find(str1);
                if (it != conjunto.end())
                    conjunto.erase(it);
            } 
            else continue;
        }

        cout << "TOTAL\n";
        for (auto it = conjunto.begin(); it != conjunto.end(); ++it)
            cout << *it << '\n';

    }

    return 0;
}