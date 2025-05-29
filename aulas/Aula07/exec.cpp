#include <iostream>

using namespace std;
void saida (int t, int v[]) {
    int i;
    for (i=0;i<t;i++)
        cout<<v[i]<<" \t";
    cout<<endl;
}
void selection_sort (int t, int v[]) {
    int menor, aux_troca, i,j;

    for (i=0; i<t-1; i++) {
        menor=i;

        for (j=i+1; j<t; j++) {
            if (v[j] < v[menor] )
                menor= j;
        }


        aux_troca=v[i];
        v[i]=v[menor];
        v[menor]=aux_troca;

        // terminou troca
        saida(t,v);
    }
}

int main () {

    // tamanho vetor
    int tamanho = 0;

    cout << "Tamanho do vetor: " << endl;
    cin >> tamanho;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor do vetor: " << endl;
        cin >> vetor[i];
    }

    selection_sort(tamanho, vetor);
    saida(tamanho, vetor);

    return 0;

}



