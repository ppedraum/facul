#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double num1, num2, pot, raiz1, raiz2;
	
	cout << "Digite um número" << endl;
	cin >> num1;
	
	cout << "Digite outro número" << endl;
	cin >> num2;
	
	pot = pow(num1, num2);
	raiz1 = sqrt(num1);
	raiz2 = sqrt(num2);
	
	cout << "A raíz quadrada do primeiro número é " << raiz1 << endl;
	cout << "A raíz quadrada do segundo número é " << raiz2 << endl;
	cout << "A potência do primeiro número pelo segundo é " << pot << endl; 
	
	return 0;
}
