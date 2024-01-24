#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string name;
    int gold = 0;
    int silver = 0;
    int bronze = 0;
} Country;

bool comparation(const Country &a, const Country &b) {
    if (a.gold != b.gold) {
        return a.gold > b.gold;
    }

    if (a.silver != b.silver) {
        return a.silver > b.silver;
    }

    if (a.bronze != b.bronze) {
        return a.bronze > b.bronze;
    }

    return a.name < b.name;
}

int main() {
    int qtd_test;

    cin >> qtd_test;

    int i = 0;
    vector<Country> array(qtd_test);
    while (qtd_test--) {
        cin >> array[i].name >> array[i].gold >> array[i].silver >> array[i].bronze;
        i++;
    }

    sort(array.begin(), array.end(), comparation);

    for (Country country: array) 
        cout << country.name << ' ' << country.gold << ' ' << country.silver << ' ' << country.bronze << '\n';

    return 0;
}