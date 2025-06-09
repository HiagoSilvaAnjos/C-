#include <iostream>
#include <string> // Para usar std::string
// Não precisamos de <utility> se vamos implementar swap manualmente para a struct

using namespace std;

// Definição da struct
struct DadosItem
{
    int id;
    string nome;
    double valor;
};

// Função para imprimir um array de structs DadosItem
void imprimirArrayDeStructs(DadosItem arrayDeItens[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << "{ID: " << arrayDeItens[i].id
             << ", Nome: " << arrayDeItens[i].nome
             << ", Valor: " << arrayDeItens[i].valor << "} ";
    }
    cout << endl;
}

// Particiona o array de structs em torno de um pivô (o primeiro elemento).
// A ordenação será baseada no campo 'valor'.
int particionarStructs(DadosItem arrayDeItens[], int inicio, int fim)
{
    DadosItem valorPivo = arrayDeItens[inicio]; // O pivô é um objeto DadosItem
    int ponteiroEsquerda = inicio + 1;
    int ponteiroDireita = fim;

    while (ponteiroEsquerda <= ponteiroDireita)
    {
        // Compara os structs usando o campo 'valor'
        if (arrayDeItens[ponteiroEsquerda].valor <= valorPivo.valor)
        {
            ponteiroEsquerda++;
        }
        else if (valorPivo.valor <= arrayDeItens[ponteiroDireita].valor)
        {
            ponteiroDireita--;
        }
        else
        { // (arrayDeItens[ponteiroEsquerda].valor > valorPivo.valor) e (arrayDeItens[ponteiroDireita].valor < valorPivo.valor)
            // Troca os objetos struct completos
            DadosItem temp = arrayDeItens[ponteiroEsquerda];
            arrayDeItens[ponteiroEsquerda] = arrayDeItens[ponteiroDireita];
            arrayDeItens[ponteiroDireita] = temp;
            ponteiroEsquerda++;
            ponteiroDireita--;
        }
    }

    // Coloca o pivô na sua posição final correta
    DadosItem temp = arrayDeItens[inicio];
    arrayDeItens[inicio] = arrayDeItens[ponteiroDireita];
    arrayDeItens[ponteiroDireita] = temp;

    return ponteiroDireita; // Retorna a posição final do pivô
}

// Implementação do algoritmo Quicksort recursivo para structs
void quicksortStructsCrescente(DadosItem arrayDeItens[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int posicaoPivoFinal = particionarStructs(arrayDeItens, inicio, fim);
        quicksortStructsCrescente(arrayDeItens, inicio, posicaoPivoFinal - 1); // Ordena a partição esquerda
        quicksortStructsCrescente(arrayDeItens, posicaoPivoFinal + 1, fim);    // Ordena a partição direita
    }
}

int main()
{
    DadosItem meusItens[] = {
        {101, "Monitor", 350.50},
        {103, "Teclado", 75.00},
        {100, "Mouse", 25.75},
        {102, "Fone de Ouvido", 120.20}};
    int tamanhoItens = sizeof(meusItens) / sizeof(meusItens[0]);

    cout << "Array de structs original: ";
    imprimirArrayDeStructs(meusItens, tamanhoItens);

    quicksortStructsCrescente(meusItens, 0, tamanhoItens - 1);

    cout << "Array de structs ordenado (por valor, crescente): ";
    imprimirArrayDeStructs(meusItens, tamanhoItens);

    return 0;
}