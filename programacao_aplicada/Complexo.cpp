#include <iostream>
#include <string>

using namespace std;

class Complexo{
	public:
		double r_, i_;
		Complexo(double r, double i);
		Complexo();
		void mostraComplexo();
		Complexo operator+(Complexo c);
};

Complexo::Complexo(double r, double i): r_(r), i_(i){}
Complexo::Complexo(){}
void Complexo::mostraComplexo(){
	cout << "(" << r_ << " + " << i_ << "i)";
}
Complexo Complexo::operator+(Complexo c){
	return Complexo(r_ + c.r_, i_ + c.i_);
}


int main(){
	
	Complexo c1(1,2), c2(2,1);
	
	Complexo c3 = c1 + c2;
	
	c3.mostraComplexo();
	
	return 0;
}
