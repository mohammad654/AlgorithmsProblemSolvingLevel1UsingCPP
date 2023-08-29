#include <iostream>

using namespace std;
string readName() {
	cout << "enter your name " << endl;
	string name;
	getline(cin, name);
	return name;
}
void printName(string name) {
	cout << "Yor name is : " << name << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printName(readName());
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}