/*Crie uma struct chamada "Triângulo" que armazene as coordenadas de três pontos: A, B e C. Adicione um método para calcular a área do triângulo. Adicionar um método significa colocar a função dentro da struct*/

#include <iostream>
#include <cmath>
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
	float AB, AC, BC;
	float s; // SemiPerímetro
	float Area;
	float perimetro;
	
	void Distancia(float &ponto, Coordenadas &J, Coordenadas &K){
	ponto = sqrt((K.x- J.x)*(K.x- J.x) + (K.y- J.y)*(K.y- J.y));	
	}
	
	void PreencheCoordenadas(){
		LeCoordenadas(A,'A');
		LeCoordenadas(B,'B');
		LeCoordenadas(C,'C');
	}
	
	void CalculaPontos(){
		Distancia(AB, A, B);
		Distancia(AC, A, C);
		Distancia(BC, B, C);
	}
	
	void CalculaArea(){ // Usa fórmula de Heron para calcular area usando apenas os pontos
		perimetro = (AB+AC+BC);
		s = (AB+AC+BC)/2;
		Area = sqrt(s*(s-AB)*(s-AC)*(s-BC));
	}
	void Imprime(){
		cout << "Lado AB: " << AB << endl;
		cout << "Lado AC: " << AC << endl;
		cout << "Lado BC: " << BC << endl;
		cout << "valor do perimetro: " << perimetro << endl;
		cout << "valor do semiperimetro: " << s << endl;
		cout << "valor da area: " << Area << endl;
	}
};

int main(){
	Triangulo X;

	X.PreencheCoordenadas();
	X.CalculaPontos();
	X.CalculaArea();
	X.Imprime();
	
	return 0;
}
