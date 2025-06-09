#include <iostream>
// A função std::swap já está implicitamente disponível em iostream em muitos compiladores,
// mas é bom incluir <utility> explicitamente para garantir.
// Para este problema, usaremos o swap padrão que o compilador oferece.

using namespace std;

// Função para imprimir o array
void imprimirArray(int arrayDeInteiros[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << arrayDeInteiros[i] << " ";
    }
    cout << endl;
}

// Particiona o array em torno de um pivô (o primeiro elemento).
// Este método move o pivô para sua posição correta e retorna essa posição.
// Elementos à esquerda do pivô serão menores, e à direita, maiores.
int particionarArray(int arrayDeInteiros[], int inicio, int fim)
{
    int valorPivo = arrayDeInteiros[inicio];
    int ponteiroEsquerda = inicio + 1;
    int ponteiroDireita = fim;

    while (ponteiroEsquerda <= ponteiroDireita)
    {
        if (arrayDeInteiros[ponteiroEsquerda] <= valorPivo)
        {
            ponteiroEsquerda++;
        }
        else if (valorPivo <= arrayDeInteiros[ponteiroDireita])
        {
            ponteiroDireita--;
        }
        else
        { // (arrayDeInteiros[ponteiroEsquerda] > valorPivo) e (arrayDeInteiros[ponteiroDireita] < valorPivo)
            // Troca os elementos para que os menores fiquem à esquerda e os maiores à direita do pivô
            int temp = arrayDeInteiros[ponteiroEsquerda];
            arrayDeInteiros[ponteiroEsquerda] = arrayDeInteiros[ponteiroDireita];
            arrayDeInteiros[ponteiroDireita] = temp;
            ponteiroEsquerda++;
            ponteiroDireita--;
        }
        // Descomente a linha abaixo para ver a progressão da ordenação
        // imprimirArray(arrayDeInteiros, 8); // Ajuste 8 para o tamanho real do array se for fixo para depuração
    }

    // Coloca o pivô na sua posição final correta
    int temp = arrayDeInteiros[inicio];
    arrayDeInteiros[inicio] = arrayDeInteiros[ponteiroDireita];
    arrayDeInteiros[ponteiroDireita] = temp;

    return ponteiroDireita; // Retorna a posição final do pivô
}

// Implementação do algoritmo Quicksort recursivo
void quicksortCrescente(int arrayDeInteiros[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int posicaoPivoFinal = particionarArray(arrayDeInteiros, inicio, fim);
        quicksortCrescente(arrayDeInteiros, inicio, posicaoPivoFinal - 1); // Ordena a partição esquerda
        quicksortCrescente(arrayDeInteiros, posicaoPivoFinal + 1, fim);    // Ordena a partição direita
    }
}

int main()
{
    int meuVetor[8] = {24, 36, 0, 7, 48, 1, 59, 2};
    int tamanhoVetor = 8;

    cout << "Array original: ";
    imprimirArray(meuVetor, tamanhoVetor);

    quicksortCrescente(meuVetor, 0, tamanhoVetor - 1);

    cout << "Array ordenado (crescente): ";
    imprimirArray(meuVetor, tamanhoVetor);

    // Teste com array vazio e com um único elemento para robustez
    int vetorVazio[] = {};
    imprimirArray(vetorVazio, 0);          // Saída para array vazio
    quicksortCrescente(vetorVazio, 0, -1); // Caso base, não faz nada
    imprimirArray(vetorVazio, 0);

    int vetorUmElemento[] = {10};
    imprimirArray(vetorUmElemento, 1);
    quicksortCrescente(vetorUmElemento, 0, 0);
    imprimirArray(vetorUmElemento, 1);

    return 0;
}