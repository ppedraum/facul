#include <iostream>
#include <string>

using namespace std;

class Payment{
	public:
		virtual void processPayment(double ammount) = 0;
};

class PaypalPayment: Payment{
	public:
		void processPayment(double ammount) override{
			ammount *= 1.1;
			cout << "Voce pagou R$" << ammount << endl;
		}
};

class CCardPayment: Payment{
	public:
		void processPayment(double ammount) override{
			ammount *= 1.5;
			cout << "Voce pagou R$" << ammount << endl;
		}
};

class BitcoinPayment: Payment{
	public:
		void processPayment(double ammount) override{
			ammount *= 2;
			cout << "Voce pagou R$" << ammount << endl;
		}
};


int main(){
	
	PaypalPayment pp;
	CCardPayment cc;
	BitcoinPayment btc;
	
	pp.processPayment(1000);
	cc.processPayment(1000);
	btc.processPayment(1000);
	
	return 0;
}
