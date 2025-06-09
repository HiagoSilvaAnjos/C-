#include <iostream>
using namespace std;

void imprimir_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int vetor[], int tamanho)
{

    int valor_atual, indice_anterior;

    for (int i = 0; i < tamanho; i++)
    {
        valor_atual = vetor[i];
        indice_anterior = i - 1;

        while (indice_anterior >= 0 && valor_atual > vetor[indice_anterior])
        {
            vetor[indice_anterior + 1] = vetor[indice_anterior];
            indice_anterior--;
        }

        vetor[indice_anterior + 1] = valor_atual;
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

    imprimir_vetor(vector, tamanho);

    return 0;
}