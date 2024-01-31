#include<iostream>
#include<string>

using namespace std;

class avtomob {
protected:
	string name;
	int speed;

public:
	avtomob(string name, int speed) :name(name), speed(speed) {}

	virtual void print() {
		cout << endl;
		cout << "name: " << name << " speed: " << speed;
	}
};

class autobus : public avtomob {
public:
	int max_pass;

public:
	autobus(string name, int speed, int max_pass) :avtomob(name, speed), max_pass(max_pass) {}

	void print() override{
		cout << endl;
		avtomob::print();
		cout << " max_pass: " << max_pass << endl;
	}
};

int main() {
	avtomob avto("sedan", 70);
	avto.print();

	autobus bus("electrobus", 10, 30);
	bus.print();

	avtomob* ptcar = &bus;
	ptcar->print();

}