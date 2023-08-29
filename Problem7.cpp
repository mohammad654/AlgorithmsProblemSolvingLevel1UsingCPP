#include <iostream>

using namespace std;
int readNumber() {
	cout << " please enter a number?" << endl;
	int number;
	cin >> number;
	return number;
}
float calculateHalfOfNumber(int num) {
	return (float) num / 2;
}
void printhalfOfNumber(int num) {
	cout << "Half of " << to_string(num) << " is " << calculateHalfOfNumber(num) << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printhalfOfNumber(readNumber());
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
