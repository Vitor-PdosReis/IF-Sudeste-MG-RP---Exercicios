/*Crie uma struct chamada "Ponto2D" que armazene as coordenadas x e y. Adicione um método para calcular a distância entre dois pontos. Adicionar um método significa colocar a função dentro da struct*/
#include <iostream>
#include <math.h>
using namespace std;

struct Ponto2D{
	float x;
	float y;
	float resultado;
	
	void Distancia(Ponto2D &B){
	
	resultado = sqrt((B.x- x)*(B.x- x) + (B.y- y)*(B.y- y));	
	}
	
	void PreencheP2(){
		Ponto2D B;
		cout <<"insira o x2" << endl;
		cin >> B.x;
		cout <<"insira o y2" << endl;
		cin >> B.y;	
		
		Distancia(B);
	}
	
	
	
	void ImprimeMensagens(){
		cout << "O resultado eh: "<< resultado << endl;
	}
};

int main (){
	Ponto2D A;
	
	cout <<"insira o x1" << endl;
	cin >> A.x;
	cout <<"insira o y1" << endl;
	cin >> A.y;
	
	A.PreencheP2();
	A.ImprimeMensagens();

	return 0;
}
