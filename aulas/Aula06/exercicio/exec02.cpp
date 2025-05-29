#include <iostream>
using namespace std;

void imprimi(int v[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
        cout << v[i] << " \t";
    cout << endl;
}

void insertion_sort(int t, int v[])
{
    int valor_pivo, j, i;
    for (i = 1; i < t; i++)
    {
        valor_pivo = v[i];
        j = i - 1;
        while ((j >= 0) and (valor_pivo < v[j]))
        {
            v[j + 1] = v[j];
            j--;
        }
        // Coloca o valor_pivo na posição correta
        imprimi(v, t);

        v[j + 1] = valor_pivo;
    }
}

int main()
{

    // tamanho vetor
    int tamanho = 0;

    cout << "Tamanho do vetor: " << endl;
    cin >> tamanho;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o valor do vetor: " << endl;
        cin >> vetor[i];
    }

    insertion_sort(tamanho, vetor);
    imprimi(vetor, tamanho);
    return 0;
}