#include <iostream>
using namespace std;

struct Meme
{
    int num_meme;
    string nome_meme, assunto, site;
};

void ler_memes(Meme memes[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cin >> memes[i].num_meme >> memes[i].nome_meme >> memes[i].assunto >> memes[i].site;
    }
}

void imprimir_memes(Meme memes[], int tamanho, string site_buscado)
{
    bool encontrado = false;

    for (int i = 0; i < tamanho; i++)
    {
        if (memes[i].site == site_buscado)
        {
            cout << memes[i].num_meme << " "
                 << memes[i].nome_meme << " "
                 << memes[i].assunto << " "
                 << memes[i].site << endl;

            encontrado = true;
        }
    }

    if (!encontrado)
    {
        cout << "Inexistente" << endl;
    }
}

void insertion_sort(Meme memes[], int tamanho)
{

    Meme valor_atual;
    int indice_anterior;

    for (int i = 1; i < tamanho; i++)
    {
        valor_atual = memes[i];
        indice_anterior = i - 1;

        while (indice_anterior >= 0 && valor_atual.num_meme < memes[indice_anterior].num_meme)
        {

            memes[indice_anterior + 1] = memes[indice_anterior];
            indice_anterior--;
        }

        memes[indice_anterior + 1] = valor_atual;
    }
}

int main()
{

    int tamanho;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;

    Meme memes[tamanho];

    ler_memes(memes, tamanho);

    insertion_sort(memes, tamanho);

    string site_buscado;
    cout << "Digite o site a ser buscado: " << endl;
    cin >> site_buscado;

    imprimir_memes(memes, tamanho, site_buscado);

    return 0;
}