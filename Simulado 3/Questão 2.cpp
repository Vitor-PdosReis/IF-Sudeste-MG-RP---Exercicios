/*Questão 2
a) Faça uma função que receba como parâmetro uma matriz dinâmica de números inteiros. Essa função deve retornar o somatório dos elementos correspondentes a uma matriz triangular inferior.
 Imprima uma matriz, na qual possui essa matriz triangular inferior, com zeros nos índices que não participaram do somatório.
b) Faça uma função que receba como parâmetros duas matrizes dinâmicas de números inteiros e imprima qual delas possui o maior valor quando somados os seus elementos, se é o primeiro ou o segundo parâmetro. 
O elemento de índice (0,1) não participa dos somatórios.
c) Faça uma função que receba como parâmetros uma matriz dinâmica de números inteiros e também
um número inteiro auxiliar. Na matriz, onde houver esse número, substitua por ZERO e imprima em
qual coluna ocorreram mais substituições.
d) No programa, CRIE duas matrizes, PREENCHA-AS e as passe como parâmetros para a função da
letra ‘b’*/

#include <iostream>
using namespace std;

//Letra A
int MatrizTriangular (int **matriz, int tam){
	int somatorio;

	//cria matriz triangular
	for(int i = 0; i < tam; i++ ){ 
		for(int j = 0; j < tam; j++){
			if(i >=j)
				somatorio += matriz[i][j];
			else
				matriz[i][j] = 0;
		}
	}
	//imprime matriz nova
	cout <<"Imprimindo matriz triangular: " << endl;
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << "[" << i+1 << "]["<< j+1 << "]: " << matriz[i][j]<< "\t";
		}
		cout << endl;
	}
	
	return somatorio;
}

//Letra B
int MaiorEntre (int ** matrizA, int ** matrizB, int tam1, int tam2){
	int somatorioA = 0, somatorioB = 0;
		for(int i = 0; i < tam1; i++ ){ 
			for(int j = 0; j < tam1; j++){
				if(!(i == 0 && j== 1))
				somatorioB += matrizB[i][j];
		}
	}
		for(int i = 0; i < tam2; i++ ){ 
			for(int j = 0; j < tam2; j++){
				if(!(i == 0 && j== 1))
				somatorioB += matrizB[i][j];
		}
	}
	if(somatorioA > somatorioB)
		cout << "O maior eh o A" << endl;
	else if(somatorioA < somatorioB)
		cout <<"O maior eh o B" << endl;
	else 
		cout <<"O resultado de ambas eh igual";
	
}

//Letra C
void PesquisaNum(int ** matriz, int num, int tam){
	int * Vetor1 = new int [tam];
	int maior = 0;
	int posicao;
	bool troca = false;
		
	for(int i = 0; i <tam; i++){
		Vetor1[i]=0;
	}
	
	for(int i = 0; i < tam; i++ ){ 
			for(int j = 0; j < tam; j++){
				if(matriz[i][j]==num){
					Vetor1[j] += 1;
					matriz[i][j] = 0;
					troca = true;
				}
			}
	}
	if(troca){
		for(int i = 0; i <tam; i++){
	 		if(maior<Vetor1[i]){
				maior=Vetor1[i];
				posicao = i;
		}	
	}
	} else
		cout <<"Nao houve troca!" << endl;
	
	cout <<"A coluna que houve mais trocas foi a " << posicao+1 << endl;
}

void preencherMatriz(int **matriz, int tam, int num){
	cout <<"Preencha a matriz " << num <<" :" <<endl;
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << "[" << i+1 << "]["<< j+1 << "]: ";
			cin >> matriz[i][j];
		}
	}
}

void imprimirMatriz(int **matriz ,int tam, int num){
	cout <<"Imprimindo matriz " << num <<" :" <<endl;
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
		cout << "[" << i+1 << "]["<< j+1 << "]: " << matriz[i][j]<< "\t";
		}
	cout << endl;
	}
}

int main(){
	
	int** matriz1;
	int** matriz2;
	int tam = 3;
	int total = 0;
	
	matriz1 = new int* [tam];
	
	for(int i = 0; i < tam; i++){
		matriz1[i] = new int [tam];
	}
	
	matriz2 = new int* [tam];
	for(int i = 0; i < tam; i++){
	matriz2[i] = new int [tam];
	}
	
	preencherMatriz(matriz1,tam,1);
	preencherMatriz(matriz2,tam,2);
	
	imprimirMatriz(matriz1,tam,1);
	imprimirMatriz(matriz2,tam,2);
	
	total = MatrizTriangular(matriz1,tam);
	cout <<"O valor do somatorio da matriz triangular 1 foi de: " << total << endl;
	
	MaiorEntre(matriz1,matriz2,tam,tam);
	
	int pesquisa;
	cout<<"qual numero deseja remover da matriz 1 triangular?" << endl;
	cin >> pesquisa;
	PesquisaNum(matriz1,pesquisa, tam);
	imprimirMatriz(matriz1,tam,1);
	
	return 0;
}
