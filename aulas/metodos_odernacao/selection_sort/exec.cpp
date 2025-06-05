#include <iostream>
using namespace std;

void selection_sort(int lista_inteiros[], int tamanho_lista)
{

    for (int indice = 0; indice < tamanho_lista - 1; indice++)
    {
        int indiceMenor = indice; // 1° => 0 ; 2° => 1 ; 3° => 2 ; 4° => 3 ; ...

        for (int indiceSeguinte = indice + 1; indiceSeguinte < tamanho_lista; indiceSeguinte++)
        {
            if (lista_inteiros[indiceSeguinte] < lista_inteiros[indiceMenor])
            {
                indiceMenor = indiceSeguinte; // Atualiza o índice do menor elemento
            }
        }

        // Troca o elemento atual com o menor encontrado
        int aux = lista_inteiros[indice];
        lista_inteiros[indice] = lista_inteiros[indiceMenor];
        lista_inteiros[indiceMenor] = aux;
    }
}

int main()
{

    int tamanho_lista = 6;
    int lista_inteiros[tamanho_lista] = {4, 8, 2, 9, 5, 0};

    selection_sort(lista_inteiros, tamanho_lista);

    cout << "Lista ordenada: ";
    for (int i = 0; i < tamanho_lista; i++)
    {
        cout << lista_inteiros[i] << "\t";
    }
    cout << endl;

    return 0;
}