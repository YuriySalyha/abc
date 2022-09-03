#include <iostream>
#include "calculator.h"
#include "User.h" 
using namespace std;

int main(){
	User user;
	cout << "Enter your name: ";
	cin >> user.name;
	cout << "Enter your surname: ";
	cin >> user.surname;
	cout << "Enter year when you born: ";
	cin >> user.year;
	cout << "Enter mounth when you born: ";
	cin >> user.mounth;
	cout << "Enter day when you born: ";
	cin >> user.day;
	if (!user.isUserOlderThan14(user.day, user.mounth, user.year)) {
		cout << "You are too young for that program";
		return 0;
	}
	cout << "Enter your country: ";
	cin >> user.country;
	cout << "Enter your username: ";
	cin >> user.username;
	cout << "Enter your password: ";
	cin >> user.password;
	/*
	calculator calc;
	calc.setNumber1(5);
	calc.setNumber2(10);
	Number number3;
	number3.value = 15;
	cout << "Sum: " << calc.calculate('+').value << "\n";
	cout << "Sub: " << calc.calculate('-').value << "\n";
	cout << "Mlt: " << calc.calculate('*').value << "\n";
	cout << "Div: " << calc.calculate('/').value << "\n";*/
}