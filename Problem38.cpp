#include <iostream>

#include<cmath>

using namespace std;
enum enCheckPrime {
	prime = 1, notprime = 2
};
float readPositiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number <= 0);
	return (float) number;
}
enCheckPrime checkPrime(int number) {
    if (number <= 1) {
        return enCheckPrime::notprime; // 0 and 1 are not prime numbers
    }

    for (int counter = 2; counter <= sqrt(number); counter++) {
        if (number % counter == 0) {
            return enCheckPrime::notprime;
        }
    }
    return enCheckPrime::prime;
}

void printNumberType(int number) {
	switch(checkPrime(number)) {
		case enCheckPrime::prime:
			cout << number << " it is a prime number" << endl;
			break;
		case enCheckPrime::notprime:
			cout << number << " it is not a prime number" << endl;
			break;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printNumberType(readPositiveNumber("Please enter a positive number?"));
	
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
