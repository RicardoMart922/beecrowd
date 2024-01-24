#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

bool verification(string str) {
    int flag_01 = 0, flag_02 = 0, flag_03;

    if (str.size() <= 5 || str.size() >= 33) return false;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 65 && str[i] <= 90) flag_01 = 1;
        else if (str[i] >= 97 && str[i] <= 122) flag_02 = 1;
        else if ((str[i]-'0') >= 0 && (str[i]-'0') <= 9) flag_03 = 1;
        else return false;
    }

    if (flag_01 && flag_02 && flag_03) return true;

    return false;
}

int main() {

    bool condition;
    string password;

    while (getline(cin, password)) {

        condition = verification(password);

        if (condition)
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }


    return 0;
}