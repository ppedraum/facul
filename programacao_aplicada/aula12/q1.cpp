#include <iostream>
#include <string>

using namespace std;

class Shape{
	public:
		virtual double area() = 0;
};

class Quadrado: public Shape{
	private:
		double l_;
	public:
		Quadrado(double l): l_(l){}
		double area() override{
			return l_*2;
		}
};

class Circulo: public Shape{
	private:
		double pi_ = 3.14, r_;
	public:
		Circulo(double r): r_(r){}
		double area() override{
			return pi_ * r_ * r_;
		}
};

class Triangulo: public Shape{
	private:
		double b_, h_;
	public:
		Triangulo(double b, double h): b_(b), h_(h){}
		double area() override{
			return (b_ * h_) / 2;
		}
};

int main(){
	Quadrado quadrado(2);
	Circulo circulo(2);
	Triangulo triangulo(2,2);
	
	cout << quadrado.area() << endl;
	cout << circulo.area() << endl;
	cout << triangulo.area() << endl;
	
	return 0;
}
