#include <iostream>

using namespace std;
enum enPassFail {
	pass = 1, fail = 2
};
int readMark() {
	cout << " please enter a mark?" << endl;
	int number;
	cin >> number;
	return number;
}
enPassFail checkMark(int mark) {
	if(mark > 65) return enPassFail::pass;
	else return enPassFail::fail;
}
void printResult(enPassFail passFail) {
	if(passFail == enPassFail::pass) cout << "you passed" << endl;
	else cout << "you faild" << endl;
}
/*
void printResult(int  mark) {
	if(checkMark(mark) == enPassFail::pass) 
		cout << "you pass the exam " << endl;
	else 
		cout << "good luck" << endl;
	
}
*/

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printResult(checkMark(readMark()));
	
	//	printResult(readMark());
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}