#include <cstdio>

using namespace std;

int main() {
    int n;

    scanf("%d", &n);

    while (n--) {
        int m, a, b, c;

        scanf("%d %d %d %d", &m, &a, &b, &c);
        
        int s = a + b + c;

        if (m) { // Elevador em movimento
            if (s > 1)
                printf("X\n");
            else 
                printf("0\n");
        } 
        else { // Elevador parado 
            if (s > 1)
                printf("X\n");
            else 
                printf("%d\n", s);
        }
    }

    return 0;
}