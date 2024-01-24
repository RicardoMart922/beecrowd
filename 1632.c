#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int t;
	
	scanf("%d", &t);
	
	while (t--) {
		char senha[20];
		scanf("%s", senha);
		
		int r = 1;
		for (int i = 0; i < strlen(senha); i++) {
			char l = toupper(senha[i]);
			
			if (l=='A' || l=='E' || l=='I' || l=='O' || l=='S')
				r = r * 3;
			else if (senha[i]=='0' || senha[i]=='1' || senha[i]=='3' || senha[i]=='4' || senha[i]=='5')
				r = r * 3;
			else
				r = r * 2;
		}
		
		printf("%d\n", r);
	}
	
	return 0;
}