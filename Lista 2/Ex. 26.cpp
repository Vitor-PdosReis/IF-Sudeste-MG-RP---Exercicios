/* Lista 02 -Exercicio 26
Faça um programa que peça para N pessoas a sua idade, ao final o programa deverá verificar se a média de idade da turma varia entre [0 e 25],
 [26 e 60] e [maior que 60]; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.*/
#include <iostream>
using namespace std;

int calculatotal(int N,int contador = 1){
	if (contador>N)
	return 0;
	int num;
	cout <<"insira a idade da pessoa "<< contador << endl; 
	cin >> num;
	return num+calculatotal(N,contador+1);
}

int main(){
	int N;
	float media;
	float total;
	cout <<"insira o N de pessoas que irao inserir sua idade"<<endl;
	cin >> N;
	total=calculatotal(N);
	media = total/N;
	if(media>=0 && media<=25){
		cout <<"a turma eh jovem"<< endl;
	} else if(media<=60){
		cout <<"a turma eh adulta"<< endl;
	} else if(media>60){
		cout <<"a turma eh idosa"<<endl;
	}
//	cout <<"o total foi " << total << endl; - confere se o calculo das variaves está correto
//	cout <<"a media eh "<< media << endl;
	return 0;
}
