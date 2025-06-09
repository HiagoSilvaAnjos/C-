#include <iostream>

void selection_Sort(int tamanho, int vetor[])
{
    int indice_menor, auxiliar_troca;

    for (int i = 0; i < tamanho - 1; i++)
    {
        indice_menor = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[indice_menor])
            {
                indice_menor = j; // Atualiza o índice do menor elemento
            }
        }

        // Troca o elemento atual com o menor encontrado
        auxiliar_troca = vetor[i];
        vetor[i] = vetor[indice_menor];
        vetor[indice_menor] = auxiliar_troca;
    }
}

int main()
{
    int tamanho_vetor;
    std::cout << "Digite um número inteiro: " << std::endl;
    std::cin >> tamanho_vetor;

    int vector[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
    {
        std::cout << "Digite o elemento " << i + 1 << ": " << std::endl;
        std::cin >> vector[i];
    }

    // ordena com selection sort
    selection_Sort(tamanho_vetor, vector);

    // imprime

    for (int i = 0; i < tamanho_vetor; i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}