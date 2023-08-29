#include <iostream>

using namespace std;
enum enPassFail {
	pass = 1, fail = 2
};
void readNumbers(int & number1, int & number2, int & number3) {
	cout << "please enter a number 1?" << endl;
	cin >> number1;
	cout << "please enter a number 2?" << endl;
	cin >> number2;
	cout << "please enter a number 3?" << endl;
	cin >> number3;
}
int sumNumbers(int number1, int number2, int number3) {
	return number1 + number2 + number3;
}
float averageNumbers(int number1, int number2, int number3) {
	return (float) sumNumbers(number1, number2, number3) / 3;
}
enPassFail checkAverage(int average) {
	if(average > 65) return enPassFail::pass;
	else return enPassFail::fail;
}
void printAverage(float average) {
	if(checkAverage(average) == enPassFail::pass) cout << "you passed" << endl;
	else cout << "you faild" << endl;
}                                      
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number1, number2, number3;
	readNumbers(number1, number2, number3);
	printAverage(averageNumbers(number1, number2, number3));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
