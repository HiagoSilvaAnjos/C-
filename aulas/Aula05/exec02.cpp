#include <iostream>
using namespace std;

//declaração da struct país
struct pais {
	string nome; //campo 1
	int populacao; //campo 2
}; //este ponto-virgula é obrigatório



int main () {
	int n;
	cout<<"Informe a quantidade de elementos ";
	cin>>n;
	
	pais vetor[n];
	cout<<"Digite "<<n<<" nomes de países e sua população\n";
	for (int i=0; i<n; i++) {
		cin>>vetor[i].nome;
		cin>>vetor[i].populacao;
		
	}

    for (int index = 0; index < n; index++) {
        cout << "Pais: " << vetor[index].nome << " População: " << vetor[index].populacao << endl; 
        cout << endl;
    }
	
	return 0;
	
}