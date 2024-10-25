#include <iostream>
#include <string>

using namespace std;

// Podemos usar a recursão para chamar uma função nela mesma, cumprindo regras definidas, para chegar em um resultado
// Exemplos disso são Árvores Binárias, sistema de comentários de um post, sistema de pastas do SO, dentre outros
int fat(int n){
	// Esse é o caso base, onde a função para de chamar ela mesma pois já sabe o resultado, retornando o resultado final
	// na primeira chamada da função (antes de iniciar a recursão)
	if(n == 1){
		return 1;
	}
	
	// Esse é o caso geral, onde utilizamos a recursão para descobrir os próximos valores
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
