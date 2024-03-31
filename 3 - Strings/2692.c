#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
	char teclas_originais;
	char teclas_trocadas;
} Teclado;

int foi_trocada(Teclado *teclas, char letra, int tam) {
	int i = 0;

	for (i = 0; i < tam; i++)
		if (letra == teclas[i].teclas_originais || letra == teclas[i].teclas_trocadas)
			return 1;

	return 0;
}

char faz_troca(Teclado *teclas, char letra, int tam) {
	int i;

	for (i = 0; i < tam; i++)
		if (letra == teclas[i].teclas_originais || letra == teclas[i].teclas_trocadas)
			if (letra == teclas[i].teclas_originais)
				return teclas[i].teclas_trocadas;
			else
				return teclas[i].teclas_originais;

}

void troca_letras(char *string, Teclado *teclas, int tam) {
	int i = 0;

	while (string[i]) {
		if (foi_trocada(teclas, string[i], tam))
			string[i] = faz_troca(teclas, string[i], tam);
		i++;
	}
}

int main () {
	int numero_teclas_trocadas;
	int numero_frases;
	char frase[100];

	scanf("%d %d", &numero_teclas_trocadas, &numero_frases);

	Teclado teclas[numero_teclas_trocadas];

	for (int i = 0; i < numero_teclas_trocadas; i++)
		scanf(" %c %c", &teclas[i].teclas_originais, &teclas[i].teclas_trocadas);

	while (numero_frases--) {
		scanf(" %[^\n]", frase);

		troca_letras(frase, teclas, numero_teclas_trocadas);

		printf("%s\n", frase);

		memset(frase, 0, sizeof(frase));
	}

    return 0;
}
