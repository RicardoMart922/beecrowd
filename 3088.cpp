#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string input;

    while (getline(cin, input)) {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == ' ') {
                if (input[i+1] == ',' || input[i+1] == '.') continue;
                else cout << input[i];
            } else cout << input[i];
        }
        cout << '\n';
    }

    return 0;
}