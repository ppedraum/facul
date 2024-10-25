#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int soma(int a,int b);
void saudacao(string nome);


int main(){
	setlocale(LC_ALL, "portuguese");
	
	string nome;
	
	cout << soma(1,2);
	
	cout << "Digite nome " << endl;
	
	cin >> nome;
	
	saudacao(nome);
	
}

int soma(int a, int b){
	return a + b;
}

void saudacao(string nome){
	cout << "Olá " << nome << "!" << endl;
}
