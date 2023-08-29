#include <iostream>

using namespace std;
int readNumber(string message) {
	int number;
	cout << message << endl;
	cin >> number;
	return number;
}
int sumNumber() {
	int sum = 0, cuont = 1, number = 0;
	do {
		number = readNumber("Please enter number " + to_string(cuont));
		if(number == -99) {
			break;
		}
		sum += number;
		cuont++;
	} while(number != -99);
	return sum;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int sum = sumNumber();
	cout << "\nThe result = " << sum << endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
