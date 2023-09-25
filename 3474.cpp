#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;
 
int main() {
    double valor, qtde;
    cin >> valor >> qtde;
    cout << fixed << setprecision(2);
    cout << valor / qtde << '\n';
    return 0;
}