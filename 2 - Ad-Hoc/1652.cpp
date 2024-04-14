#include <bits/stdc++.h>

using namespace std;

char vowels[] = {'a', 'e', 'i', 'o', 'u'};

int check_end_y(string str) {
    int size = str.size();

    for (int i = 0; i < 5; i++)
        if (str[size-2] == vowels[i])
            return 0;

    if (str[size-1] == 'y')
        return 1;

    return 0;
}

int check_end(string str) {
    int size = str.size();

    if (str[size-1] == 111 || str[size-1] == 115 || str[size-1] == 120)
        return 1;

    if ((str[size-2] == 99 || str[size-2] == 115) && str[size-1] == 104)
        return 1;

    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int l, n, flag = 1;
    string key, value, word;
    map<string, string> map_str;

    cin >> l >> n;
    cin.ignore();

    for (int i = 0; i < l; i++) {
        cin >> key >> value;
        map_str[key] = value;
    }

    for (int i = 0; i < n; i++) {
        cin >> word;

        for (int j = 0; j < l; j++) {
            if (map_str.find(word) != map_str.end()) {
                cout << map_str[word] << '\n';
                flag = 0;
                break;
            }
        }

        if (flag) {
            if (check_end_y(word)) {
                for (int i = 0; i < word.size()-1; i++)
                    cout << word[i];
                cout << "ies\n";
            } else if (check_end(word)) {
                cout << word << "es\n";
            } else {
                cout << word << "s\n";
            }
        }
        flag = 1;
    }

    return 0;
}