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
//	cout << "Seu nome � " << nome << endl;
//	cout << "Sua idade �" << idade << endl;

//	int num1, num2;
//	
//	cout << "Digite um n�mero" << endl;
//	cin >> num1;
//	
//	cout << "Digite outro n�mero" << endl;
//	cin >> num2;
//	
//	cout << "Adi��o �: " 	    << num1 + num2 << endl;
//	cout << "Subtra��o �: "     << num1 - num2 << endl;
//	cout << "Multiplica��o �: " << num1 * num2 << endl;
//	cout << "Divis�o �: " 		<< num1 / num2 << endl;

	double c, f;
	
	cout << "Digite a temperatura em celcius: " << endl;
	cin >> c;
	
	f = c * 9 / 5 + 32;
	
	cout << "A temperatura em farenheit �: " << f << "�";
	
		
	
}
