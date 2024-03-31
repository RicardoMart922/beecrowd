#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    string max_str = "";

    while (true) {
        getline(cin, input);

        if (input == "0") 
            break;

        stringstream s(input);

        string word;
        int flag = 1;
        while (s >> word) {
            if (max_str.size() <= word.size())
                max_str = word;

            if (flag) {
                cout << word.size();
                flag = 0;
            } 
            else
                cout << '-' << word.size();
        }
        cout << '\n';
    }

    cout << "\nThe biggest word: " << max_str << '\n';

    return 0;
}