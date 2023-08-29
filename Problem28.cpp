#include <iostream>

using namespace std;
enum enOddEven {
	odd = 1, even = 2
};
int readNumber() {
	cout << "Please enter a number?" << endl;
	int number;
	cin >> number;
	return number;
}
enOddEven checkNumberType(int number) {
	if(number % 2 != 0) return enOddEven::odd;
	else return enOddEven::even;
}
int printOdd_UsingWhile(int n) {
	int sum = 0, count = 0;
	while(count < n) {
		count++;
		if(checkNumberType(count) == enOddEven::odd) sum += count;
	}
	return sum;
}
int printOdd_UsingDoWhile(int n) {
	int sum = 0, count = 0;
	do {
		count++;
		if(checkNumberType(count) == enOddEven::odd) sum += count;
	}
	while(count < n);
	return sum;
}
int printOdd_UsingFor(int n) {
	int sum = 0;
	for(int count = 1; count <= n; count++) {
		if(checkNumberType(count) == enOddEven::odd) {
			sum += count;
		}
	}
	return sum;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number = readNumber();
	cout << "While loop " << printOdd_UsingWhile(number) << endl;
	cout << "\nDo while loop " << printOdd_UsingDoWhile(number) << endl;
	cout << "\nFor loop " << printOdd_UsingFor(number) << endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
