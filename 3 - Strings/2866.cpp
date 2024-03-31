#include <iostream>
#include <string>

using namespace std;

bool is_valid(char str) {
    if (str >= 97 && str <= 122)
        return 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;

    cin >> n;
    cin.ignore();

    string word;
    while (n--) {
        cin >> word;

        for (int i = word.size() - 1; i >= 0; i--) {
            if (is_valid(word[i]))
                cout << word[i];
        }
        cout << '\n';
    }

    return 0;
}