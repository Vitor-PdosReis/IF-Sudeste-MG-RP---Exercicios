
/*Lista 02 -Exercicio 27 
Numa eleição existem três candidatos. 
Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.*/
#include <iostream>
using namespace std;

void votacao(int n){
	int A = 0, B = 0, C = 0;
	bool opcao;
	char voto;
	cout <<"vote A, para o candidato 1"<<endl<<"vote B, para o candidato 2"<<endl<<"vote C, para o candidato 3"<<endl;
	for(int i =1;i<=n;i++){
	cout <<"Ola eleitor " << i << " vote no seu candidato"<<endl;
	do{
	cin >> voto;
	switch(voto){
		case 'A':
			opcao = true;
			A++;
			break;
		case 'B':
			opcao = true;
			B++;
			break;
		case 'C':
			opcao = true;
			C++;
			break;
		default:
			opcao = false;
			cout <<"opcao invalida, insira o valor novamente"<<endl;
			break;
	}
	} while(opcao==false);
}
	cout << "numero de votos do candidato A: " << A << endl;
	cout << "numero de votos do candidato B: " << B << endl;
	cout << "numero de votos do candidato C: " << C << endl;
}

int main(){
	int totalelei = 0;
	cout <<"insira o numero total de eleitores" << endl;
	cin >> totalelei;
	votacao(totalelei);
	return 0;
}
