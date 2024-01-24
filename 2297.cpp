#include <iostream>
 
using namespace std;
 
int main() {
    int n = 1, r, a, b, sa, sb;
    while (1) {
        cin >> r;
        
        if (!r) break;
        
        sa = sb = 0;
        for (int i = 0; i < r; i++) {
            cin >> a >> b;
            sa += a, sb += b;
        }
        
        cout << "Teste " << n++ << '\n'; 
        if (sa > sb)
            cout << "Aldo\n";
        else 
            cout << "Beto\n";
        cout << '\n';
    }
    
    return 0;
}