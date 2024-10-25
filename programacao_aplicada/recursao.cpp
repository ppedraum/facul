#include <iostream>
#include <string>

using namespace std;

// Podemos usar a recurs�o para chamar uma fun��o nela mesma, cumprindo regras definidas, para chegar em um resultado
// Exemplos disso s�o �rvores Bin�rias, sistema de coment�rios de um post, sistema de pastas do SO, dentre outros
int fat(int n){
	// Esse � o caso base, onde a fun��o para de chamar ela mesma pois j� sabe o resultado, retornando o resultado final
	// na primeira chamada da fun��o (antes de iniciar a recurs�o)
	if(n == 1){
		return 1;
	}
	
	// Esse � o caso geral, onde utilizamos a recurs�o para descobrir os pr�ximos valores
	return n * fat(n - 1);
}

int soma(int n){
	if(n == 1){
		return 1;
	}
	
	return n + soma(n - 1);
}

int fibo(int n){
	//Caso base
	if(n <= 1){
		return n;
	}
	//Caso geral
	return fibo(n - 1) + fibo(n - 2);
}


int main(){
	
	cout << fat(5) << endl;
	cout << soma(5) << endl;
	cout << fibo(5) << endl;
	
	return 0;
}
