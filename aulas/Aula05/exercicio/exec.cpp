#include <iostream>
using namespace std;

struct Aluno {
	string nome;
	int matricula;
    float nota1;
    float nota2;
    char sexo;
}; 

void mediaGeralAunos (Aluno alunos[], int tamanhoTurma) {

    float somaNotas = 0;

    for (int index =0; index < tamanhoTurma; index++) {
        somaNotas += (alunos[index].nota1 + alunos[index].nota2);
    };

      if (tamanhoTurma == 0) {
        cout << "qualquer coisa" << endl;
    } else {
        cout << "Media Geral: " << (somaNotas/(tamanhoTurma * 2)) << endl;
    }


}

void mediaGeralMasculino (Aluno alunos[], int tamanhoTurma) {

    float somaNotas = 0;
    int totalAlunosMasculino = 0;

    for (int index =0; index < tamanhoTurma; index++) {

        if (alunos[index].sexo == 'M') {
            totalAlunosMasculino += 1;
            somaNotas += (alunos[index].nota1 + alunos[index].nota2);
        }
    };

    if (totalAlunosMasculino == 0) {
        cout << "qualquer coisa" << endl;
    } else {
        cout << "Media Geral MAsculino: " << (somaNotas/(totalAlunosMasculino * 2)) << endl;
    }


}

void mediaGeralFeminino (Aluno alunos[], int tamanhoTurma) {

    float somaNotas = 0;
    int totalAlunosFeminino = 0;

    for (int index =0; index < tamanhoTurma; index++) {

        if (alunos[index].sexo == 'F') {
            totalAlunosFeminino += 1;
            somaNotas += (alunos[index].nota1 + alunos[index].nota2);
        }
    };


    if (totalAlunosFeminino == 0) {
        cout << "qualquer coisa" << endl;
    } else {
        cout << "Media Geral Feminino: " << (somaNotas/(totalAlunosFeminino * 2)) << endl;
    }

}

int main () {
	int tamanhoTurma;
	cout<<"Informe a quantidade de alunos na turma ";
	cin>>tamanhoTurma;
	
	Aluno turma[tamanhoTurma];
	cout<<"Digite o número de matricula, nome, duas notas e o sexo do aluno\n";
	for (int i=0; i<tamanhoTurma; i++) {
		cin>>turma[i].matricula;
        cin>>turma[i].nome;
        cin>>turma[i].nota1;
		cin>>turma[i].nota2;
        cin>>turma[i].sexo;
	}

    mediaGeralAunos(turma, tamanhoTurma);
    mediaGeralMasculino(turma, tamanhoTurma);
    mediaGeralFeminino(turma, tamanhoTurma);
	
	return 0;
	
}