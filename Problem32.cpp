#include <iostream>

using namespace std;
int readPositiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number < 0);
	return number;
}
int readPowerNumber(string message) {
	int power;
	do {
		cout << message << endl;
		cin >> power;
	} while(power <= 0);
	return power;
}
int powerResult(int number, int power) {
	if(power == 0) return 1;
	int p = 1;
	for(int i = 1; i <= power; i++) p = p * number;
	return p;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int result = powerResult(readPositiveNumber("Please enter a positive number?"), readPowerNumber("Please enter the power"));
	cout << "\nThe result = " << result;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
