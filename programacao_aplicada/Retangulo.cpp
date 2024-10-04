#include <iostream>
#include <string>

using namespace std;

class Retangulo{
	private:
		double w_, h_;
		
	public:
		Retangulo(double w, double h);
		Retangulo();
		
		friend double calcularArea(Retangulo r);
		friend double calcularPerimetro(Retangulo r);
};

Retangulo::Retangulo(double w, double h):w_(w),h_(h){}
Retangulo::Retangulo(){}

double calcularArea(Retangulo r){
	return r.w_ * r.h_;
}

double calcularPerimetro(Retangulo r){
	return (2 * r.w_) + (2 * r.h_);
}

int main(){
	
	Retangulo r(2,2);
	
	cout << "Area do retangulo: " << calcularArea(r) << endl;
	cout << "Perimetro do retangulo: " << calcularPerimetro(r);
	
	
	return 0;
}
