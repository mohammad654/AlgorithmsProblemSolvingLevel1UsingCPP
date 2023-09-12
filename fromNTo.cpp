#include <iostream>
#include <limits>

using namespace std;
int readNumber(string message){
int number;
do{
cout<<message<<endl;
cin>>number;
}while(number<=0);
return number;
}
//1->n
void printNumberFromToN(int number){
 cout<<"-----------------------------------------"<<endl;
for(int i=1;i<=number;i++)
 	cout<<i<<endl;

}
//n->1
void printNumberFromNTo(int number){
 cout<<"-----------------------------------------"<<endl;
 int i=1;
 while(i<=number){
     cout<<number<<endl;
     number--;
 }
}
//sum odd
enum enOdd{odd=1,even=2};
enOdd checkOdd(int number){
return number%2==0?enOdd::even:enOdd::odd;
}

void printSumOddNumbers( int number){
    int sum=0;
    for(int i=1;i<=number;i++){
        if(checkOdd(i)==enOdd::odd)
        sum +=i;
    }
 	    cout<<"sum odd = "<<sum<<endl;
}
void printSumEvenNumbers( int number){
    int sum=0;
    for(int i=1;i<=number;i++){
        if(checkOdd(i)==enOdd::even)
        sum +=i;
    }
    cout<<"sum even = "<<sum<<endl;
}
void printFactorialNumbers( int number){
    int factorial=1;
    for(int i=1;i<=number;i++)
        factorial *=i;
    cout<<"factorial  = "<<factorial<<endl;
}
//calculate
float calculatePower(int number,int power){
cout<<number<<" power "<<power<<endl;
if(power==0)
    return 1;
 float p=1;
for(int i=1;i<=number;i++)
p =p*number;
return p;
}
void printPowerNumber(float number){
cout<<number<<endl;
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
    //   printNumberFromToN(readNumber("Enter a positive number ot print from 1 to your entered number"));
     //  printNumberFromNTo(readNumber("Enter a positive number ot print from your entered number to 1"));
    //int number=readNumber("Enter a positive number to print sum of even and odd and factorial numbers");

//	printSumOddNumbers(number);
//	printSumEvenNumbers(number);
//	printFactorialNumbers(number);
    int number=readNumber("Enter a  number");
    int power=readNumber("Enter the power");
    printPowerNumber(calculatePower(number,power));

	cout << "\n\n***************************************************\n\n";
	return 0;
}