#include <bits/stdc++.h>

using namespace std;

int maiorDivisorComum(int, int);

int main()
{
    int tamanho_vetor, qtde_queries, opcao, inicio_intervalo, final_intervalo, valor_soma, maior_divisor;

    cin >> tamanho_vetor >> qtde_queries;

    long long int vetor_int[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
        cin >> vetor_int[i];

    while (qtde_queries--)
    {
        cin >> opcao;
        
        if (opcao == 1)
        {
            cin >> inicio_intervalo >> final_intervalo >> valor_soma;

            for (int i = inicio_intervalo-1; i < final_intervalo; i++)
                vetor_int[i] += valor_soma;
        }
        else
        {
            cin >> inicio_intervalo >> final_intervalo;

            for (int i = inicio_intervalo-1; i < final_intervalo; i++)
            {
                maior_divisor = maiorDivisorComum(maiorDivisorComum(vetor_int[inicio_intervalo-1], vetor_int[inicio_intervalo]), vetor_int[i]);
            }
            cout << maior_divisor << "\n";
        }
    }

    return 0;
}

int maiorDivisorComum(int numero1, int numero2)
{
    if (numero1 % numero2 == 0)
        return numero2;
    else
        return maiorDivisorComum(numero2, numero1 % numero2);
}