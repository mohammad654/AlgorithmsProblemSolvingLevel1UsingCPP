#include <iostream>

using namespace std;
enum enOddEven {
	odd = 1, even = 2
};
int readNumber() {
	cout << " please enter a number?" << endl;
	int number;
	cin >> number;
	return number;
}
enOddEven checkNumberType(int number) {
	int result = number % 2;
	if(result == 0) return enOddEven::even;
	else return enOddEven::odd;
}
void printNumberType(enOddEven oddEven) {
	if(oddEven == enOddEven::even) {
		cout << "number is even " << endl;
	} else {
		cout << "number is odd " << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printNumberType(checkNumberType(readNumber()));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}