#include <iostream>

using namespace std;
int readNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number < 0);
	return number;
}
enum enOperation {
	add = '+', subtract = '-', muliply = '*', divide = '/'
};
enOperation readOperationType() {
	char ot = '+';
	cout << "Please enter operation type(+ - * /)" << endl;
	cin >> ot;
	return (enOperation) ot;
}
float calculate(float number1, float number2, enOperation operation) {
	switch(operation) {
		case operation::add:
			return number1 + number2;
		case operation::subtract:
			return number1 - number2;
		case operation::muliply:
			return number1 * number2;
		case operation::divide:
			return number1 / number2;
		default:
			return number1 + number2;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number1 = readNumber("Please enter firsr number");
	int number2 = readNumber("Please enter second number");
	enOperation operation = readOperationType();
	cout << "\nThe result = " << calculate(number1, number2, operation) << endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
