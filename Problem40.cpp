#include <iostream>
#include <cmath>

using namespace std;

float readPositiveNumber(string message) {
    float number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

void calculateServiceAndTax(float bill) {
    float service = bill * 0.1; // 10% service fee

    float tax = bill * 0.16; // 16% tax

    cout << "Service = " << service << "$" << endl;
    cout << "Tax = " << tax << "$" << endl;
	cout << "----------------------------" << endl;
    float total = bill + service + tax;
    cout << "Total after service fee and tax = " << total << "$" << endl;
}

int main() {
    std::cout << "\n\n\n\n****************************************************\n\n";
    float bill = readPositiveNumber("Please enter total bill");
    cout << "The total bill is " << bill << "$" << endl;
  
    calculateServiceAndTax(bill);
    std::cout << "\n\n***************************************************\n\n";
    return 0;
}

