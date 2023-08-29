#include <iostream>

using namespace std;
struct stInfo {
	string firstName;
	string lastName;
};
stInfo readInfo() {
	stInfo info;
	cout << "please enter your first name?" << endl;
	getline(cin, info.firstName);
	cout << "please enter your last name?" << endl;
	//cin.ignore(1,'\n');
	getline(cin, info.lastName);
	return info;
}
string getFullName(stInfo info, bool reversed) {
	string fullName = "";
	if(reversed) fullName = info.lastName + " " + info.firstName;
	else fullName = info.firstName + " " + info.lastName;
	return fullName;
}
void printInfo(string fullName) {
	cout << "your full name is :" << fullName << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printInfo(getFullName(readInfo(), true));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
