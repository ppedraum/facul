#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double num1, num2, pot, raiz1, raiz2;
	
	cout << "Digite um n�mero" << endl;
	cin >> num1;
	
	cout << "Digite outro n�mero" << endl;
	cin >> num2;
	
	pot = pow(num1, num2);
	raiz1 = sqrt(num1);
	raiz2 = sqrt(num2);
	
	cout << "A ra�z quadrada do primeiro n�mero � " << raiz1 << endl;
	cout << "A ra�z quadrada do segundo n�mero � " << raiz2 << endl;
	cout << "A pot�ncia do primeiro n�mero pelo segundo � " << pot << endl; 
	
	return 0;
}
