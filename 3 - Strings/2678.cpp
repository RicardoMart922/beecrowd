#include <iostream>
#include <string>

using namespace std;

string number(char character) {
        string c;

    if (character >= 48 && character <= 57) {
        c.push_back(character);
        return c;
    }

    if (character>=65 && character<=90) {
        if (character >= 65 && character <= 67) return "2";
        if (character >= 68 && character <= 70) return "3";
        if (character >= 71 && character <= 73) return "4";
        if (character >= 74 && character <= 76) return "5";
        if (character >= 77 && character <= 79) return "6";
        if (character >= 80 && character <= 83) return "7";
        if (character >= 84 && character <= 86) return "8";
        if (character >= 87 && character <= 90) return "9";
    }

    if (character>=97 && character <=122) {
        if (character >= 97 && character <= 99) return "2";
        if (character >= 100 && character <= 102) return "3";
        if (character >= 103 && character <= 105) return "4";
        if (character >= 106 && character <= 108) return "5";
        if (character >= 109 && character <= 111) return "6";
        if (character >= 112 && character <= 115) return "7";
        if (character >= 116 && character <= 118) return "8";
        if (character >= 119 && character <= 122) return "9";
    }

    return "";
}

void convert(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '*' || str[i] == '#') 
            cout << str[i];
        else if (str[i] == ' ') 
            continue;
        else 
            cout << number(str[i]);
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    string word;
    while (getline(cin, word)) {
        convert(word);
    }
    
    return 0;
}