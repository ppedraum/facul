#include <iostream>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
//	int idade;
//	string nome;
//	
//	cout << "Digite seu nome" << endl;
//	getline(cin, nome);
//	
//	cout << "Digite sua idade" << endl;
//	cin >> idade;
//	
//	cout << "Seu nome é " << nome << endl;
//	cout << "Sua idade é" << idade << endl;

//	int num1, num2;
//	
//	cout << "Digite um número" << endl;
//	cin >> num1;
//	
//	cout << "Digite outro número" << endl;
//	cin >> num2;
//	
//	cout << "Adição é: " 	    << num1 + num2 << endl;
//	cout << "Subtração é: "     << num1 - num2 << endl;
//	cout << "Multiplicação é: " << num1 * num2 << endl;
//	cout << "Divisão é: " 		<< num1 / num2 << endl;

	double c, f;
	
	cout << "Digite a temperatura em celcius: " << endl;
	cin >> c;
	
	f = c * 9 / 5 + 32;
	
	cout << "A temperatura em farenheit é: " << f << "°";
	
		
	
}
