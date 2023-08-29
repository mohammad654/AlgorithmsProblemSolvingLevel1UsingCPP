#include <iostream>

using namespace std;
void readNumbers(int & number1, int & number2, int & number3) {
	cout << "please enter a number 1?" << endl;
	cin >> number1;
	cout << "please enter a number 2?" << endl;
	cin >> number2;
	cout << "please enter a number 3?" << endl;
	cin >> number3;
}
int checkMax(int number1, int number2, int number3) {
	if(number1 > number2)
		if(number1 > number3) return number1;
		else return number3;
	else
	if(number2 > number3) return number2;
	else return number3;
}
void printMax(int number) {
	cout << "the max number is " << number << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number1, number2, number3;
	readNumbers(number1, number2, number3);
	printMax(checkMax(number1, number2, number3));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
