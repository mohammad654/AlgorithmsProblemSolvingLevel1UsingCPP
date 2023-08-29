#include <iostream>

#include <cmath>

using namespace std;
int readRadious() {
	float r;
	cout << "please enter radious r ?" << endl;
	cin >> r;
	return r;
}
float calculateCircle(float r) {
	const float PI = 3.14;
	float circleArea = pow(r, 2) * PI;
	return circleArea;
}
void printCircleArea(float r) {
	cout << "Circle Area is  " << r << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printCircleArea(calculateCircle(readRadious()));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
