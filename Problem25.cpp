#include <iostream>

using namespace std;
int readNumber() {
	int a;
	//cout << "Please enter a number: " << endl;
	cin >> a;
	return a;
}
bool validateNumberInRange(int number, int from, int to) {
	return (number >= from && number <= to);
}
void printValidNumberBetween(int from, int to) {
	int number = 0;
	do {
		cout << "Please enter a number between  " << from << " - " << to << endl;
		number = readNumber();
	} while(!validateNumberInRange(number, from, to));
	if(validateNumberInRange(number, from, to)) cout << "Valid number " << number << endl;
	else cout << "Invalid number " << number << endl;
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//int number = readNumber();
	printValidNumberBetween(18, 44);
	cout << "\n\n***************************************************\n\n";
	return 0;
}
