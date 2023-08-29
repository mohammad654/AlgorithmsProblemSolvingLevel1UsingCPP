#include <iostream>

using namespace std;
float readPositiveNumber(string message) {
	float number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number <= 0);
	return number;
}
struct stInfo {
	int days, hours, minutes, seconds;
};
stInfo readInfo() {
	stInfo info;
	info.days = readPositiveNumber("Please enter number of days");
	info.hours = readPositiveNumber("Please enter number of hours");
	info.minutes = readPositiveNumber("Please enter number of minutes");
	info.seconds = readPositiveNumber("Please enter number of seconds");
	return info;
}
void printAllSeconds(stInfo info) {
	int durationInSeconds = 0;
	durationInSeconds += info.days * 24 * 60 * 60;
	durationInSeconds += info.hours * 60 * 60;
	durationInSeconds += info.minutes * 60;
	durationInSeconds += info.seconds;
	cout << "duration in seconds = " << durationInSeconds << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printAllSeconds(readInfo());
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
