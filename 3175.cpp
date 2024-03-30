#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ans(vector<int> array) {
    int q = 0, count = 1;
    for (int x = 0, y = 1; y <= array.size(); x++, y++) {
        if (array[x] == array[y]) {
            q += count;
        }
        else {
            q += count;
            count++;
        }
    }
    return q;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, v;

    cin >> n;

    vector<int> array;
    for (int i = 0; i < n; i++) {
        cin >> v;
        array.push_back(v);
    }

    sort(array.begin(), array.end());

    cout << ans(array) << '\n';

    return 0;
}