#include <iostream>
#include <string>

using namespace std;

class Base{
	public:
		virtual void printHello(){
			cout << "Hello World";
		};
};

class Derivada: public Base{
	public:
		void printHello() override{
			cout << "Hello World!!!!";
		};
};


int main(){
	
	Base base;
	Derivada derivada;
	
	base.printHello();
	derivada.printHello();
	
	return 0;
}
