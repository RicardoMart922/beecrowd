#include <stdio.h>

int main (){
	char p[30];
	scanf("%s",p);
		if (p[0] == 'o' || p[0] == 'c' || p[0] == 'C' || p[0] == 'O')
			printf("mas\n");
		else
			printf("mais\n");
	return 0;
}