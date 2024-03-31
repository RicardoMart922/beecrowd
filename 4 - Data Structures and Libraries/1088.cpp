#include <iostream>
#include <vector> 

#define INF 1000000000

using namespace std;

int merge_sort(vector<int> &v) {
	
	int qtde_inversao = 0;
	
	if (v.size() == 1) return 0;
	
	vector<int> vetor_esquerdo, vetor_direito;
	
	for (int i = 0; i < v.size() / 2; i++)
		vetor_esquerdo.push_back(v[i]);
	for (int i = v.size() / 2; i < v.size(); i++)
	    vetor_direito.push_back(v[i]);
	
    qtde_inversao += merge_sort(vetor_esquerdo);
	qtde_inversao += merge_sort(vetor_direito);
	
	vetor_esquerdo.push_back(INF);
	vetor_direito.push_back(INF);
	
	int ini1 = 0, ini2 = 0;
	
	for (int i = 0; i < v.size(); i++){
		if (vetor_esquerdo[ini1] <= vetor_direito[ini2]) {
			v[i] = vetor_esquerdo[ini1];
			ini1++;
		}
		else {
			v[i] = vetor_direito[ini2];
			ini2++;
			
			qtde_inversao += vetor_esquerdo.size() - ini1 - 1;
		}
	}

	return qtde_inversao;
}

int main() {

    int n;

    while (1) {
        cin >> n;

        if (!n) break;

        vector<int> vetor(n);

        int valor;
        for (int i = 0; i < n; i++) {
            cin >> valor;
            vetor.push_back(valor);
        }

        int ans = merge_sort(vetor);

        if (ans % 2 == 0) cout << "Carlos\n";
        else cout << "Marcelo\n";
    }

    return 0;
}