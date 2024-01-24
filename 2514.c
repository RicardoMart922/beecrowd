#include <stdio.h>
#include <stdlib.h>
 
int mdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int arr[]){
    int result = arr[0];

    for(int i = 1; i < 3; i++){
        result = result * (arr[i] / mdc(result, arr[i]));
    }
    return result;
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int array[3];

        for (int i = 0; i < 3; i++) {
            scanf("%d", &array[i]);
        }
        
        printf("%d\n", mmc(array) - n);
    }

    return 0;
}
