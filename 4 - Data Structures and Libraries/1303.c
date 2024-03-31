#include <stdio.h>

#define MAX 101

typedef struct {
    int inscricao;
    int pontuacao;
    int pontos_marcados;
    int pontos_sofridos;
    double media_cestas;
} Time;

void calcularMediaCestas(Time* times, int qtd_times) {
    for (int i = 1; i <= qtd_times; i++)
        times[i].media_cestas = (!times[i].pontos_sofridos) ? 
                                times[i].pontos_marcados :
                                (double) times[i].pontos_marcados/times[i].pontos_sofridos;
}

void printResultado(Time* times, int qtd_times) {
    for (int i = 1; i <= qtd_times; i++)
        (i == 1) ? printf("%d", times[i].inscricao) : printf(" %d", times[i].inscricao);
    putchar('\n');
}

void printTime(Time time) {
    printf("Inscricao: %d\n", time.inscricao);
    printf("Pontuacao: %d\n", time.pontuacao);
    printf("Media Cestas: %.2lf\n", time.media_cestas);
    printf("Pontos Marcados: %d\n", time.pontos_marcados);
    printf("Pontos Sofridos: %d\n", time.pontos_sofridos);
}

void printTimes(Time* times, int qtd_times) {
    for (int i = 1; i <= qtd_times; i++) {
        printTime(times[i]);
        putchar('\n');
    }
}

unsigned char comparar(Time, Time);
void merge(Time *, int, int, int);
void mergeSort(Time *, int, int);

int main() {
    int numero_instancia = 1;
    int qtd_times;
    Time times[MAX];
    int qtd_partidas;

    int inscricao_time1,
        inscricao_time2,
        pontos_time1,
        pontos_time2;

    while (1) {
        scanf("%d", &qtd_times);
        if (!qtd_times) break;

        for (int i = 1; i <= qtd_times; i++) {
            times[i].inscricao = i;
            times[i].pontuacao = 0;
            times[i].pontos_marcados = 0;
            times[i].pontos_sofridos = 0; 
            times[i].media_cestas = 0.00;
        }

        qtd_partidas = qtd_times * (qtd_times - 1)/2;
        for (int i = 0; i < qtd_partidas; i++) {
            scanf("%d %d %d %d", &inscricao_time1, &pontos_time1, &inscricao_time2, &pontos_time2);

            times[inscricao_time1].pontos_marcados += pontos_time1;
            times[inscricao_time2].pontos_marcados += pontos_time2;

            times[inscricao_time1].pontos_sofridos += pontos_time2;
            times[inscricao_time2].pontos_sofridos += pontos_time1;

            if (pontos_time1 > pontos_time2) {
                times[inscricao_time1].pontuacao += 2;
                times[inscricao_time2].pontuacao += 1;
            } else {
                times[inscricao_time1].pontuacao += 1;
                times[inscricao_time2].pontuacao += 2;
            }
        }

        calcularMediaCestas(times, qtd_times);

        mergeSort(times, 1, qtd_times);

        if (numero_instancia > 1) 
            putchar('\n');
        printf("Instancia %d\n", numero_instancia++);
        printResultado(times, qtd_times);
    }

    return 0;
}

void merge(Time *vetor, int inicio, int meio, int fim) {
    int tamanho_esquerdo = meio - inicio + 1;
    int tamanho_direito = fim - meio;

    Time vetor_esquerdo[tamanho_esquerdo];
    Time vetor_direito[tamanho_direito];

    int i, j, k;
    for (i = 0; i < tamanho_esquerdo; i++)
        vetor_esquerdo[i] = vetor[inicio + i];

    for (j = 0; j < tamanho_direito; j++)
        vetor_direito[j] = vetor[j + 1 + meio];

    i = j = 0;
    k = inicio;

    while (i < tamanho_esquerdo && j < tamanho_direito) {
        if (comparar(vetor_esquerdo[i], vetor_direito[j]) == 1)
            vetor[k] = vetor_esquerdo[i++];
        else 
            vetor[k] = vetor_direito[j++];
        k++;
    }

    while (i < tamanho_esquerdo) {
        vetor[k] = vetor_esquerdo[i];
        i++;
        k++;
    }

    while (j < tamanho_direito) {
        vetor[k] = vetor_direito[j];
        j++;
        k++;
    }
}

void mergeSort(Time *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

unsigned char comparar(Time time1, Time time2) {
    if (time1.pontuacao > time2.pontuacao)
        return 1;
    else if (time2.pontuacao > time1.pontuacao)
        return 2;
    else {
        if (time1.media_cestas > time2.media_cestas)
            return 1;
        else if (time2.media_cestas > time1.media_cestas)
            return 2;
        else {
            if (time1.pontos_marcados > time2.pontos_marcados)
                return 1;
            else if (time2.pontos_marcados > time1.pontos_marcados)
                return 2;
            else {
                if (time1.inscricao < time2.inscricao)
                    return 1;
                else
                    return 2;
            }
        }
    }
}