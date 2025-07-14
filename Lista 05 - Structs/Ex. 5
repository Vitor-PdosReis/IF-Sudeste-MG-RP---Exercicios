/*Crie uma struct chamada "Círculo" que armazene o raio (float). Crie uma função para calcular a área do círculo e outra função para calcular o perímetro.*/

#include <iostream>
#include <math.h>
using namespace std;

struct Circulo{
	float raio;
};

void areaC (Circulo &R){
	float area = pow((R.raio*3.14),2);
	cout << "O valor da area eh: "<< area << endl;
}

void perimC(Circulo &R){
	float perim = R.raio*3.14*2;
	cout <<"O valor do perimetro eh: " << perim << endl;
}

int main(){
	Circulo c1;
	
	cout <<"insira o raio do circulo: ";
	cin >> c1.raio;
	
	areaC(c1);
	perimC(c1);
	
	return 0;
}
