#include <iostream>

using namespace std;
int readNumber() {
	cout << "Please enter a number?" << endl;
	int number;
	cin >> number;
	return number;
}
void printRangeFrom1ToN_UsingWhile(int n) {
	int count = 0;
	cout << "While loop" << endl;
	while(count < n) {
		count++;
		cout << count << " ";
	}
}
void printRangeFrom1ToN_UsingDoWhile(int n) {
	int count = 0;
	cout << "\nDo while loop" << endl;
	do {
		count++;
		cout << count << " ";
	}
	while(count < n);
}
void printRangeFrom1ToN_UsingFor(int n) {
	;
	cout << "\nFor loop" << endl;
	for(int count = 1; count <= n; count++) {
		cout << count << " ";
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number = readNumber();
	printRangeFrom1ToN_UsingWhile(number);
	printRangeFrom1ToN_UsingDoWhile(number);
	printRangeFrom1ToN_UsingFor(number);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
