#include <iostream> 
using namespace std; 

struct memes{
    int num_meme;
    string nome_arq, assunto, site;
};

void selection_sort(memes vetor[], int tam) {
    int menor;
    memes aux_troca;

    for (int indice = 0; indice < tam - 1; indice++) {
        // `indice` é o local onde o menor elemento da rodada será alocado
        menor = indice;

        // Encontrar o menor elemento no restante do vetor
        for (int j = indice + 1; j < tam; j++) { 
            if (vetor[j].num_meme < vetor[menor].num_meme) { 
                menor = j;
            }
        }

        // Trocar o menor elemento encontrado com o elemento na posição `indice`
        if (menor != indice) {
            aux_troca = vetor[indice];
            vetor[indice] = vetor[menor];
            vetor[menor] = aux_troca;
        }
    }
}


void entrada (memes v[], int total){
    cout << "Digite os dados dos memes:" << endl;
    for (int i = 0; i<total;i++){
        cin>>v[i].num_meme>>v[i].nome_arq;
        cin>>v[i].assunto>>v[i].site;
    }
}

void imprimi (memes v[], int total){
    cout << "Memes cadastrados:" << endl;
    for (int i = 0; i<total;i++){
        cout<<v[i].num_meme<<" "<<v[i].nome_arq<<" " << " ";
        cout<<v[i].assunto<<" "<<v[i].site<<endl;
    }
}

int main(){
    int tamanho;
    string busca;
    cin>>tamanho;
    memes v[tamanho];

    entrada(v,tamanho);

    cout << "Digite o site que deseja buscar: " << endl;
    cin >>busca;

    cout << "Memes encontrados no site " << busca << endl;
    for (int i = 0; i < tamanho; i++) {
        
        if(v[i].site == busca) {
            selection_sort(v, tamanho);
            cout << v[i].num_meme << " " << v[i].nome_arq << " " << v[i].assunto << " " << v[i].site << endl;
            }
    }

    cout << endl;

    imprimi(v,tamanho);
    return 0;
}