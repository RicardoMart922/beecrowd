#include <stdio.h>

int verification(int a, int b, int c, int d) {
	return (a * d == b * c);
}

int main() {
    int A, B, C, D;

	scanf(" %d %d %d %d", &A, &B, &C, &D);
	
    if (verification(A, B, C, D) || verification(A, D, B, C) || verification(A, C, D, B))
		printf("S\n");
	else
		printf("N\n");	
		

	return 0;
}
