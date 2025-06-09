#include <iostream>
// Não precisamos de <string> pois o problema não pede o nome do funcionário
// Não precisamos de <utility> se vamos implementar swap manualmente para a struct

using namespace std;

const int MAX_FUNCIONARIOS = 100;

// Struct para representar um funcionário
struct Funcionario
{
    int identificador;
    double horasTrabalhadas;
    double valorHora;
    double salarioAReceber; // Este campo será calculado
};

// Subprograma para ler dados de um único funcionário
// Retorna 'true' se um identificador válido for lido, 'false' se o identificador for negativo (para parar).
bool lerDadosFuncionario(Funcionario &funcionario)
{
    cout << "Identificador do funcionario (negativo para parar): ";
    cin >> funcionario.identificador;

    if (funcionario.identificador < 0)
    {
        return false; // Sinaliza que não há mais funcionários
    }

    cout << "Numero de horas trabalhadas: ";
    cin >> funcionario.horasTrabalhadas;

    cout << "Valor de uma hora trabalhada: ";
    cin >> funcionario.valorHora;

    // Calcula o salário a receber
    funcionario.salarioAReceber = funcionario.horasTrabalhadas * funcionario.valorHora;
    return true;
}

// Função para imprimir o identificador e o salário de cada funcionário
void imprimirFuncionarios(Funcionario listaFuncionarios[], int numTotalFuncionarios)
{
    for (int i = 0; i < numTotalFuncionarios; i++)
    {
        cout << listaFuncionarios[i].identificador << " " << listaFuncionarios[i].salarioAReceber << endl;
    }
}

// Particiona o array de structs Funcionario em torno de um pivô (o primeiro elemento).
// A ordenação será baseada no campo 'salarioAReceber' em ordem crescente.
int particionarFuncionarios(Funcionario listaFuncionarios[], int inicio, int fim)
{
    Funcionario pivo = listaFuncionarios[inicio]; // O pivô é um objeto Funcionario
    int ponteiroEsquerda = inicio + 1;
    int ponteiroDireita = fim;

    while (ponteiroEsquerda <= ponteiroDireita)
    {
        // Compara os funcionários usando o campo 'salarioAReceber'
        if (listaFuncionarios[ponteiroEsquerda].salarioAReceber <= pivo.salarioAReceber)
        {
            ponteiroEsquerda++;
        }
        else if (pivo.salarioAReceber <= listaFuncionarios[ponteiroDireita].salarioAReceber)
        {
            ponteiroDireita--;
        }
        else
        { // (listaFuncionarios[ponteiroEsquerda].salarioAReceber > pivo.salarioAReceber) e (listaFuncionarios[ponteiroDireita].salarioAReceber < pivo.salarioAReceber)
            // Troca os objetos struct completos
            Funcionario temp = listaFuncionarios[ponteiroEsquerda];
            listaFuncionarios[ponteiroEsquerda] = listaFuncionarios[ponteiroDireita];
            listaFuncionarios[ponteiroDireita] = temp;
            ponteiroEsquerda++;
            ponteiroDireita--;
        }
    }

    // Coloca o pivô na sua posição final correta
    Funcionario temp = listaFuncionarios[inicio];
    listaFuncionarios[inicio] = listaFuncionarios[ponteiroDireita];
    listaFuncionarios[ponteiroDireita] = temp;

    return ponteiroDireita; // Retorna a posição final do pivô
}

// Implementação do algoritmo Quicksort recursivo para structs Funcionario
void quicksortFuncionariosCrescente(Funcionario listaFuncionarios[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int posicaoPivoFinal = particionarFuncionarios(listaFuncionarios, inicio, fim);
        quicksortFuncionariosCrescente(listaFuncionarios, inicio, posicaoPivoFinal - 1); // Ordena a partição esquerda
        quicksortFuncionariosCrescente(listaFuncionarios, posicaoPivoFinal + 1, fim);    // Ordena a partição direita
    }
}

int main()
{
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    int contadorFuncionarios = 0;
    Funcionario funcionarioAtual;

    cout << "Programa de controle de salarios de funcionarios." << endl;
    cout << "-----------------------------------------------" << endl;

    // Loop para ler os dados dos funcionários até um identificador negativo ou atingir o limite
    while (contadorFuncionarios < MAX_FUNCIONARIOS && lerDadosFuncionario(funcionarioAtual))
    {
        funcionarios[contadorFuncionarios] = funcionarioAtual;
        contadorFuncionarios++;
    }

    if (contadorFuncionarios == 0)
    {
        cout << "Nenhum funcionario foi inserido." << endl;
        return 0;
    }

    cout << "\nDados dos funcionarios antes da ordenacao:" << endl;
    imprimirFuncionarios(funcionarios, contadorFuncionarios);

    // Ordena os funcionários pelo salário a receber
    quicksortFuncionariosCrescente(funcionarios, 0, contadorFuncionarios - 1);

    cout << "\nDados dos funcionarios ordenados por salario (crescente):" << endl;
    imprimirFuncionarios(funcionarios, contadorFuncionarios);

    return 0;
}