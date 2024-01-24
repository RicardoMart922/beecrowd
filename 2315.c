#include <stdio.h>

int main () {
	int ans;
	int a, b, c, d;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	ans = 0;
	if (b == d)
		ans = c - a;
	else {
		for (int i = b; i <= d; ++i) {
			if (i == 4 || i == 6 || i == 9 || i == 11) {
				if (i == b)
					ans += 30 - a;
				else if (i == d)
					ans += c;
				else
					ans += 30;
			}
			else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				if (i == b)
					ans += 31 - a;
				else if (i == d)
					ans += c;
				else
					ans += 31;
			}
			else {
				if (i == b)
					ans += 28 - a;
				else if (i == d)
					ans += c;
				else
					ans += 28;
			}
		}
	}

	printf("%d\n", ans);
    
    return 0;
}