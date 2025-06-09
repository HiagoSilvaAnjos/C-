#include <iostream>
using namespace std;

void imprime_vector_detalahdo(int vector[], int tamanho, int pos1, int pos2, bool vai_trocar)
{

    for (int i = 0; i < tamanho; i++)
    {
        cout << vector[i];
        if (i == pos1 || i == pos2)
        {
            if (pos1 != -1)
            {
                cout << (vai_trocar ? " t" : " *");
            }
        }
        cout << "\t";
    }
    cout << endl;
}

void selection_sort_detalhado(int vector[], int tamanho)
{
    int indice_menor, auxiliar_troca;

    for (int i = 0; i < tamanho - 1; i++)
    {
        indice_menor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            imprime_vector_detalahdo(vector, tamanho, j, indice_menor, false);
            if (vector[j] < vector[indice_menor])
            {
                indice_menor = j;
            }
        }

        if (i != indice_menor)
        {
            imprime_vector_detalahdo(vector, tamanho, i, indice_menor, true);
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

    selection_sort_detalhado(vetor, tamanho_vetor);

    return 0;
}