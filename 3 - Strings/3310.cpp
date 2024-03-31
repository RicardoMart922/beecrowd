#include <bits/stdc++.h>

using namespace std;

int count_inversion(int arr1[], int arr2[], int size) {
    int count = 0, i = 0, flag = 1;

    while (i < size-1) {
        if (flag && (arr1[i+1] == 0 || arr1[i] < arr1[i+1])) {
            count++;
            flag = 0;
            i++;
            continue;
        }
        if (!flag && (arr2[i+1] == 0 || arr2[i] < arr2[i+1])) {
            count++;
            flag = 1;
            i++;
            continue;
        }
        i++;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int size, ans = 0;
    cin >> size;

    int array_up[size], array_down[size];

    for (int i = 0; i < size; i++)
        cin >> array_up[i];
    for (int i = 0; i < size; i++)
        cin >> array_down[i];

    if (array_up[0] != 0 && array_down[0] != 0) {
        ans = min(count_inversion(array_up, array_down, size), count_inversion(array_down, array_up, size));
    } else {
        if (array_up[0] != 0) {
            ans = count_inversion(array_up, array_down, size);
        } else {
            ans = count_inversion(array_down, array_up, size);
        }
    }

    cout << ans << '\n';

    return 0;
}