#include <iostream>

using namespace std;
void readNumbers(float & a, float & h) {
	cout << "please enter a ?" << endl;
	cin >> a;
	cout << "please enter h?" << endl;
	cin >> h;
}
float triangleArea(float a, float h) {
	float area = (a / 2) * h;
	return area;
}
void printTriangleArea(float a) {
	cout << "Triangle Area is  " << a << endl;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	float a, h;
	readNumbers(a, h);
	printTriangleArea(triangleArea(a, h));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
