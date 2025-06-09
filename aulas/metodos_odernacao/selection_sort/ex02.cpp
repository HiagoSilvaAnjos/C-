#include <iostream>
using namespace std;

void imprime(int vector[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}

void selection_sort(int vector[], int tamanho)
{

    int indice_menor, auxiliar_troca;

    for (int i = 0; i < tamanho - 1; i++)
    {

        indice_menor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            if (vector[j] < vector[indice_menor])
            {
                indice_menor = j; // Atualiza o índice do menor elemento
            }
        }

        auxiliar_troca = vector[i];
        vector[i] = vector[indice_menor];
        vector[indice_menor] = auxiliar_troca;
    }
}

int main()
{

    int tamanho_vetor;
    cout << "Digite um número inteiro: " << endl;
    cin >> tamanho_vetor;

    int vetor[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
    {
        cout << "Digite o elemento da posição" << i + 1 << ": " << endl;
        cin >> vetor[i];
    }

    selection_sort(vetor, tamanho_vetor);

    imprime(vetor, tamanho_vetor);

    return 0;
}