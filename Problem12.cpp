#include <iostream>

using namespace std;
void readNumbers(int & number1, int & number2) {
	cout << "please enter a number 1?" << endl;
	cin >> number1;
	cout << "please enter a number 2?" << endl;
	cin >> number2;
}
int checkMax(int number1, int number2) {
	if(number1 > number2) return number1;
	else return number2;
}
void printMax(int number) {
	cout << "the max number is " << number << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number1, number2;
	readNumbers(number1, number2);
	printMax(checkMax(number1, number2));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
