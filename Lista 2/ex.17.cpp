
//A série de Fibonacci é formada pela sequência 1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série até o n−ésimo termo.

#include <iostream>
using namespace std;

void seqfibbonacci(int num){
	int F =0;
	int F1 = 1;
	int F0 = 0;
	int i= 2;
	cout << "0, 1, ";
	while(i<num){
		F=F0+F1;
		cout << F <<", ";
		F0=F1;
		F1=F;
		F=0;
		i++;
	}


}

int main(){
	int num = 0;
	cout <<"insira até qual numero vc deseja contar pela sequencia de fibbonacci"<< endl;
	cin >> num;
	seqfibbonacci(num);
	return 0;
	}
