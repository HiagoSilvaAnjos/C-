#include <iostream>
using namespace std;

struct Cartinha {
	string nome;
    string pedido;
}; 

struct Brinquedo {
	string nome;
	int quantidade;
    int quantidadePedida;

}; 

int main () {
	int tamanhoCartinhas = 0;
    int tamanhoBrinquedos = 0;
    

	cout<<"Informe a quantidade de cartinhas: ";
	cin>>tamanhoCartinhas;
	
	Cartinha cartinhas[tamanhoCartinhas];
	cout<<"Nome da criança e presente pedido de cada cartinha: \n";
	for (int i=0; i<tamanhoCartinhas; i++) {
		cin>>cartinhas[i].nome;
        cin>>cartinhas[i].pedido;
        // cin >> cartinhas[i].quantidadePedida;
	}

    cout << endl;

    cout<<"Informe a quantidade de brinquedos: ";
	cin>>tamanhoBrinquedos;
	
	Brinquedo brinquedos[tamanhoBrinquedos];
	cout<<"Nome e quantidade disponível de cada brinquedo.: \n";
	for (int i=0; i<tamanhoBrinquedos; i++) {
		cin>>brinquedos[i].nome;
        cin>>brinquedos[i].quantidade;
	}

    int index = 0;
    int index02 = 0;
    string indisponivel = "";

    for (index = 0; index < tamanhoCartinhas; index ++) {

        for (index02 = 0; index02 < tamanhoBrinquedos; index02 ++) {

            if((cartinhas[index].pedido == brinquedos[index02].nome)) {
                brinquedos[index02].quantidadePedida = 0;
                brinquedos[index02].quantidadePedida += 1;

                if(brinquedos[index02].quantidadePedida <= brinquedos[index02].quantidade) {

                     brinquedos[index02].quantidade -= 1;

                } else {
                        indisponivel += " " + brinquedos[index02].nome;
                }

            } 

        }

    }

    cout << indisponivel << endl;

	
	return 0;
	
}