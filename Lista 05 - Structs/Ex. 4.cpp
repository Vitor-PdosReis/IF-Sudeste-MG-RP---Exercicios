/*Crie uma struct chamada "Data" que armazene os seguintes dados: dia (int), mês (int) e ano (int). Crie uma função para verificar se uma data é válida.*/

#include <iostream>
using namespace std;

struct Data{
	int dia;
	int mes;
	int ano;
};

void VerifData(Data &d1){
	int contador;
	if(d1.dia<0 or d1.dia>31){
		contador++;
		cout << "Dia invalido.\n";
	}
	if(d1.mes<0 or d1.mes>12){
		contador++;
		cout << "Mes invalido. \n";
	}
	if(d1.ano<0){
		contador++;
		cout <<"Ano invalido, valor negativo\n";
	}
	if(contador==0)
		cout <<"Data valida, data inserida: "<< d1.dia << "/" << d1.mes << "/" << d1.ano;
	
}

int main (){
	Data d1;
	
	cout <<"insira o dia" << endl;
	cin >> d1.dia;
	cout<<"insira o mes" << endl;
	cin >> d1.mes;
	cout << "insira o ano" << endl;
	cin >>d1.ano;
	
	VerifData(d1);
	
	return 0;
}
