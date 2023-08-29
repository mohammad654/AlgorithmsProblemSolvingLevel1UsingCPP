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

int Factorial(int counter) {
	int factorial = 1;
	for(int i = counter; counter >= 1; counter--)
		factorial *= counter;
	return factorial;
}
void printResult(int result) {
	cout << "Factorial " << result << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printResult(Factorial(readPositiveNumber("Please enter a positive number?")));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
