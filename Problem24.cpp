#include <iostream>

using namespace std;
int readNumber() {
	int a;
	cout << "Please enter a number: " << endl;
	cin >> a;
	return a;
}
bool validateNumberInRange(int number, int from, int to) {
	return (number >= from && number <= to);
}
void printValidNumber(int a) {
	if(validateNumberInRange(a, 18, 44)) cout << "Valid number " << a << endl;
	else cout << "Invalid number " << a << endl;
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	int number = readNumber();
	printValidNumber(number);
	cout << "\n\n***************************************************\n\n";
	return 0;
}
