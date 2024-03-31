#include <bits/stdc++.h>

using namespace std;

map<char, int> map_grades;

void initialize_map() {
    map_grades['W'] = 64;
    map_grades['H'] = 32;
    map_grades['Q'] = 16;
    map_grades['E'] = 8;
    map_grades['S'] = 4;
    map_grades['T'] = 2;
    map_grades['X'] = 1;
}

int sum_grades(string str) {
    int ans = 0;

    for (int i = 0; i < str.size(); i++) {
        ans += map_grades[str[i]];
    }

    return (ans == 64) ? 1 : 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    initialize_map();

    string input;
    int ans = 0;
    while (1) {
        cin >> input;
        if (input == "*") break;

        string aux;
        for (int i = 1; i < input.size(); i++) {
            if (input[i] == '/') {
                ans += sum_grades(aux);
                aux.clear();
            } else
                aux.push_back(input[i]);
        }

        cout << ans << '\n';
        ans = 0;
    }

    return 0;
}