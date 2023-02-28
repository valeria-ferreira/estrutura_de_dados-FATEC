// Atividade01-mediaAluno.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main() {
	double nota1, nota2;
	int resposta;
	string nome;

	cout << "BEM VINDO(A)!\n";

	do {
		cout << "Nome do aluno(a): ";
		cin >> nome;

		cout << "Primeira nota: ";
		cin >> nota1;
		cout << "Segunda nota: ";
		cin >> nota2;

		cout << "O(a) aluno(a) " << nome << " recebeu a media " << (nota1 + nota2) / 2 << "\n";

		if (((nota1 + nota2) / 2) >= 6) {
			cout << "APROVADO!\n";
		}
		else {
			cout << "REPROVADO!\n";
		}

		cout << "Gostaria de calcular mais uma media? (1)sim | (2)nao: \n";
		cin >> resposta;

	} while (resposta == 1);
}
