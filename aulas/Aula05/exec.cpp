#include <iostream>
using namespace std;

//declaração da struct país
struct pais {
	string nome; //campo 1
	int populacao; //campo 2
}; //este ponto-virgula é obrigatório


int main () {
	//declarar uma variável p1 do tipo pais;
	pais p1;
	
	//acesso aos campos da variável p1;
	cout<<"Digite o nome e populacao do pais ";
	cin>>p1.nome;
	cin>>p1.populacao;
	
	//imprima os dados lidos usando um subprograma
    cout << p1.nome << endl;
    cout << p1.populacao << endl;

	//modifique os dados de p1
    p1.nome = "pais qualquer";
    p1.populacao = 10;

    //imprima os dados lidos usando um subprograma
    cout << "nome modificado: " << p1.nome << endl;
    cout << "população modificado: " << p1.populacao << endl;

	return 0;
	
}



