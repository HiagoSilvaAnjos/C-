#include <iostream>
using namespace std;

struct Cliente
{
    string nome_cliente;
    int coord_x;
    int coord_y;
    int distancia_pizzaria;
    float valor_pizza;
};

// void selection_sort(memes vetor[], int tam)
// {
//     int menor;
//     memes aux_troca;

//     for (int indice = 0; indice < tam - 1; indice++)
//     {
//         // `indice` é o local onde o menor elemento da rodada será alocado
//         menor = indice;

//         // Encontrar o menor elemento no restante do vetor
//         for (int j = indice + 1; j < tam; j++)
//         {
//             if (vetor[j].num_meme < vetor[menor].num_meme)
//             {
//                 menor = j;
//             }
//         }

//         // Trocar o menor elemento encontrado com o elemento na posição `indice`
//         if (menor != indice)
//         {
//             aux_troca = vetor[indice];
//             vetor[indice] = vetor[menor];
//             vetor[menor] = aux_troca;
//         }
//     }
// }

void entrada(Cliente v[], int total)
{
    cout << "Digite os dados do cliente:" << endl;
    for (int i = 0; i < total; i++)
    {
        cin >> v[i].nome_cliente >> v[i].coord_x;
        cin >> v[i].coord_y >> v[i].valor_pizza;
    }
}

void imprimi(Cliente v[], int tamanho)
{
    cout << "Clientes cadastrados:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << v[i].nome_cliente << " " << v[i].coord_x << " ";
        cout << v[i].coord_y << " " << v[i].valor_pizza << endl;
    }
}

int main()
{

    // Número de clientes que serão atendidos
    // Coordenada x da pizzaria
    // Coordenada y da pizzaria

    cout << "Bem-vindo ao sistema de atendimento da Pizzaria!" << endl;
    cout << "Vamos começar a inserir os dados da pizaria." << endl;

    int numero_clientes_atendidos = 0;
    cout << "Digite o número de clientes que serão atendidos: " << endl;
    cin >> numero_clientes_atendidos;

    int coord_x_pizzaria = 0;
    cout << "Digite a coordenada x da pizzaria: " << endl;
    cin >> coord_x_pizzaria;

    int coord_y_pizzaria = 0;
    cout << "Digite a coordenada y da pizzaria: " << endl;
    cin >> coord_y_pizzaria;

    int total_clientes = 0;
    cout << "Digite o número total de clientes: " << endl;
    cin >> total_clientes;

    Cliente v[total_clientes];
    entrada(v, total_clientes);

    imprimi(v, total_clientes);
    return 0;
}