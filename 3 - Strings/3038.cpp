#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string input;

    while (getline(cin, input)) {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '@') cout << 'a';
            else if (input[i] == '&') cout << 'e';
            else if (input[i] == '!') cout << 'i';
            else if (input[i] == '*') cout << 'o';
            else if (input[i] == '#') cout << 'u';
            else cout << input[i];
        }
        cout << '\n';
    }

    return 0;
}