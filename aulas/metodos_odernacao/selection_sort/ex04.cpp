#include <iostream>
using namespace std;

struct Meme
{
    int num_meme;
    string nome_meme, assunto, site;
};

void ler_memes(int tamanho, Meme memes[])
{
    for (int i = 0; i < tamanho; i++)
    {
        cin >> memes[i].num_meme >> memes[i].nome_meme >> memes[i].assunto >> memes[i].site;
    }
}

void imprimir_meme(int tamanho, Meme memes[], string site_buscado)
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

void selection_sort(Meme memes[], int tamanho)
{
    int indice_menor;
    Meme auxiliar_troca;

    for (int i = 0; i < tamanho - 1; i++)
    {
        indice_menor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            if (memes[j].num_meme < memes[indice_menor].num_meme)
            {
                indice_menor = j;
            }
        }

        auxiliar_troca = memes[i];
        memes[i] = memes[indice_menor];
        memes[indice_menor] = auxiliar_troca;
    }
}

int main()
{

    int tamanho;
    cout << "Digite o tamanho da lista de sites: " << endl;
    cin >> tamanho;

    Meme memes[tamanho];

    ler_memes(tamanho, memes);

    selection_sort(memes, tamanho);

    string site_busca;
    cout << "digite o site que quer buscar: " << endl;
    cin >> site_busca;

    imprimir_meme(tamanho, memes, site_busca);

    return 0;
}