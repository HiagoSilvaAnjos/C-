#include <iostream>
using namespace std;

void imprimeVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int vector[], int tamanho)
{

    int valor_atual, indice_anterior;

    imprimeVetor(vector, tamanho);

    for (int i = 1; i < tamanho; i++)
    {
        valor_atual = vector[i];
        indice_anterior = i - 1;

        // move os elementos do vetor que são maiores que o valor_atual
        while (indice_anterior >= 0 && valor_atual < vector[indice_anterior])
        {

            vector[indice_anterior + 1] = vector[indice_anterior];
            indice_anterior--;
        }

        // inseri o valor atual na posição correta
        vector[indice_anterior + 1] = valor_atual;
        imprimeVetor(vector, tamanho);
    }
}

int main()
{

    int tamanho;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;

    int vector[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> vector[i];
    }

    insertion_sort(vector, tamanho);

    return 0;
}