#include <stdio.h>
#include <math.h>

int main (){
	char sofa[3];
	while (scanf("%s",sofa)!=EOF) {
		if (sofa[2] == 'L')
			printf("Esse eh o meu lugar\n");
		else
			printf("Oi, Leonard\n");
	}
	return 0;
}