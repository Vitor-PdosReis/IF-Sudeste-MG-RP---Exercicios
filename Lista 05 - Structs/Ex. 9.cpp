/*Crie uma struct chamada "Triângulo" que armazene as coordenadas de três pontos: A, B e C. Adicione um método para calcular a área do triângulo. Adicionar um método significa colocar a função dentro da struct*/

#include <iostream>
using namespace std;

struct Coordenadas{
	float x;
	float y;
};

void LeCoordenadas(Coordenadas &P, char nome) {
    cout << "Insira o valor de " << nome << "x: ";
    cin >> P.x;
    cout << "Insira o valor de " << nome << "y: ";
    cin >> P.y;
}

struct Triangulo{
	Coordenadas A;
	Coordenadas B;
	Coordenadas C;
	int resultado;
	
	void Distancia(Coordenadas &B){
	resultado = sqrt((B.x- x)*(B.x- x) + (B.y- y)*(B.y- y));	
	}
	
	void PreencheCoordenadas(){
		LeCoordenadas(A,'A');
		LeCoordenadas(B,'B');
		LeCoordenadas(C,'C');
	}
	
	void CalculaArea(){ // Usa fórmula de Heron para calcular area usando apenas os pontos
		
	}
};

int main(){
	Triangulo X;
	X.PreencheCoordenadas();
	X.CalculaArea();
	
	return 0;
}
