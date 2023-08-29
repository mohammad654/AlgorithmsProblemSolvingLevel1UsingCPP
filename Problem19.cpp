#include <iostream>

#include <cmath>

using namespace std;
int readDiameter() {
	float d;
	cout << "please enter radious d ?" << endl;
	cin >> d;
	return d;
}
float calculateCircleAreaByDiameter(float d) {
	const float PI = 3.14;
	float circleArea = (pow(d, 2) * PI) / 4;
	return circleArea;
}
void printCircleArea(float d) {
	cout << "Calculate Circle Area By Diameter  " << d << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printCircleArea(calculateCircleAreaByDiameter(readDiameter()));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
