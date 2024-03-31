#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, v;

    while (1) {
        cin >> n;

        if (!n) break;


        while (1) {
            cin >> v;

            if (!v) break;

            stack<int> estacao, direcao_a, direcao_b;
            
            direcao_a.push(v);
            
            for (int i = 1; i < n; i++) {
                cin >> v;
                direcao_a.push(v);
            }

            int item = n;
            while (!direcao_a.empty()) {
                while (!estacao.empty()) {
                    if (estacao.top() == item) {
                        direcao_b.push(item);
                        estacao.pop();
                        item--;
                    } else break;
                }
                if (direcao_a.top() == item) {
                    direcao_b.push(item);
                    item--;
                } 
                else {
                    estacao.push(direcao_a.top());

                    if (estacao.top() == item) {
                        direcao_b.push(item);
                        estacao.pop();
                        item--;
                    }

                }
                direcao_a.pop();
            }

            while (!estacao.empty()) {
                direcao_b.push(estacao.top());
                estacao.pop();
            }

            int flag = 1, m = 1;
            while (!direcao_b.empty()) {
                if (direcao_b.top() == m) {
                    direcao_b.pop();
                    m++;
                }
                else {
                    cout << "No\n";
                    flag = 0;
                    break;
                }
            }

            if (flag)        
                cout << "Yes\n";
        }

        cout << '\n';
    }

    return 0;
}