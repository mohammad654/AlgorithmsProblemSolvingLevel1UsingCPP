#include <iostream>

#include<cmath>

using namespace std;
float readPositiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number <= 0);
	return (float) number;
}
void calculate(float bill, float cash){
	  float paid=   cash-bill;
	  if(bill>cash){
		  paid= bill-cash;
		 cout << "You have to paid = " <<paid<<"$" << endl; 
	  } else{
		   paid= cash-bill;
		 cout << "Reminder = " <<paid<<"$" << endl;   
	  }

}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	float bill = readPositiveNumber("Please inter total bill");
	float cash = readPositiveNumber("Please inter total cash paid");
	cout << "The total bill is " << bill << "$" << endl;
	cout << "The total cash is " << cash << "$" << endl;

	cout << "----------------------------" << endl;
				calculate(bill, cash);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
