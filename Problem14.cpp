#include <iostream>

using namespace std;
void readNumbers(int & a, int & b) {
	cout << "please enter a ?" << endl;
	cin >> a;
	cout << "please enter b?" << endl;
	cin >> b;
}
void swapNumbers(int & a, int & b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void printNumbers(int a, int b) {
	cout << "A is " << a << endl;
	cout << "B is " << b << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int a, b;
	readNumbers(a, b);
	printNumbers(a, b);
	cout << "------------" << endl;
	swapNumbers(a, b);
	printNumbers(a, b);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
