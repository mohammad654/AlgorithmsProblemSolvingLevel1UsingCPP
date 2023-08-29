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
float sumNumbers(int number1, int number2, int number3) {
	return number1 + number2 + number3;
}
void printSum(int total) {
	cout << "the total sum of numbers is " << total << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number1, number2, number3;
	readNumbers(number1, number2, number3);
	printSum(sumNumbers(number1, number2, number3));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
