#include <iostream>

using namespace std;
struct stInfo {
	int age;
	bool hasDrivingLicense;
};
stInfo readInfo() {
	stInfo info;
	cout << "please enter your age?	" << endl;
	cin >> info.age;
	cout << "do you have a driving license?" << endl;
	cin >> info.hasDrivingLicense;
	return info;
}
bool isAccepted(stInfo info) {
	return (info.age > 21 && info.hasDrivingLicense);
}
void printInfo(stInfo info) {
	if(isAccepted(info)) cout << "Hired" << endl;
	else cout << "Rejected" << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printInfo(readInfo());
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
