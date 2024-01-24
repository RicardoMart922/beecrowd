#include <iostream>
#include <list>

using namespace std;

int main() {
    
    string entrada;
    while (getline(cin, entrada)) {
        list<string> resposta;
        int flag = 0;
        for (int i = 0; i < entrada.size(); i++) {
            if (flag) {
                string str;
                while (entrada[i] != ']')
                    str.push_back(entrada[i++]);
                resposta.push_front(str);
                flag = 0;
            }
        }
    }

    return 0;
}