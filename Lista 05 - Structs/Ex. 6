/*Crie uma struct chamada "Livro" que armazene os seguintes dados: título (string), autor (string) e ano de publicação (int). Crie uma função para exibir as informações de um livro.*/

#include <iostream>
using namespace std;

struct Livro{
	string titulo;
	string autor;
	int ano;
};

void imprimeInfo(Livro &L){
	cout << "Titulo do livro\t\t"<<"Autor do livro\t\t" <<"Ano de publicacao" << endl;
	cout <<L.titulo<< "\t\t\t" << L.autor<<"\t\t\t" <<L.ano;
}

int main(){
	Livro L;
	
	cout <<"Insira o titulo do livro: ";
	cin >> L.titulo;
	cout <<"Insira o autor do livro: ";
	cin >> L.autor;
	cout<<"Insira o ano de publicacao: ";
	cin >> L.ano;
	
	imprimeInfo(L);
	
	return 0;
}
