#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verificaBalancoParenteses (char *);

int main () {
	char expressao[1100];

	while (scanf(" %s", expressao) != EOF) {
		if(verificaBalancoParenteses(expressao))
			printf("correct\n");
		else
			printf("incorrect\n");
	}
	
	return 0;
}

bool verificaBalancoParenteses(char *str) {
	short qtsP = 0;

	if (*str == ')')
		return false;

	while ((*str) && (qtsP >= 0)) {
		if (*str == '(')
			qtsP++;

		if (*str == ')')
			qtsP --;

		str++;
	}

	if (qtsP == 0)
		return true;
	else
		return false;
}