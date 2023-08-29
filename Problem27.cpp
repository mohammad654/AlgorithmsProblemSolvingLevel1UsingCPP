#include <iostream>

using namespace std;
int readNumber() {
	cout << "Please enter a number?" << endl;
	int number;
	cin >> number;
	return number;
}
void printRangeFromNTo1_UsingWhile(int n) {
	int count = n + 1;
	cout << "While loop" << endl;
	while(count > 1) {
		count--;
		cout << count << " ";
	}
}
void printRangeFromNTo1_UsingDoWhile(int n) {
	int count = n + 1;
	cout << "\nDo while loop" << endl;
	do {
		count--;
		cout << count << " ";
	}
	while(count > 1);
}
void printRangeFromNTo1_UsingFor(int n) {
	;
	cout << "\nFor loop" << endl;
	for(int count = n; count >= 1; count--) {
		cout << count << " ";
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number = readNumber();
	printRangeFromNTo1_UsingWhile(number);
	printRangeFromNTo1_UsingDoWhile(number);
	printRangeFromNTo1_UsingFor(number);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
