/*Crie uma struct chamada "TimeFutebol" que armazene os seguintes dados: nome (string),
cidade (string) e quantidade de títulos (int). Crie uma função para exibir as informações de um time de futebol.*/

#include <iostream>
using namespace std;

struct TimeFutebol{
	string nome;
	string cidade;
	int qtTitulo;
};

void ImprimeInfo(TimeFutebol &t1){
	cout <<"Nome: " << t1.nome;
	cout <<"\nCidade: "<< t1.cidade;
	cout <<"\nQuantidade de titulos: "<< t1.qtTitulo << endl;
}

int main(){
	TimeFutebol t1;
	
	cout << "Insira o nome do time: ";
	cin >> t1.nome;
	cout << "Insira a cidade do time: ";
	cin >> t1.cidade;
	cout << "Insira a quantidade de titulos do time: ";
	cin >> t1.qtTitulo;
	
	ImprimeInfo(t1);
	
	return 0;
}
