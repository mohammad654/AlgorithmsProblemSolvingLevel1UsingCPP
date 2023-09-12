#include <iostream>
#include <limits>

using namespace std;
//checkAverageMarks----------------
void readNumbers(int& mark1,int& mark2,int& mark3,string message){
int a=1;
while(a<=3){
            cout << "Enter a number " <<  a++<< message << endl;
            cin >> mark1;
           cout << "Enter a number " <<  a++<< message << endl;
            cin >> mark2;
            cout << "Enter a number " <<  a++<< message << endl;
            cin >> mark3;
}
}
float checkAverageMarks(int mark1,int mark2,int mark3){
return  (mark1+mark2+mark3)/3;
}

enum enPassFailed{passed=1,failed=0};
enPassFailed checkmarksPassOrFailed(float average ){
return average>60?enPassFailed::passed:enPassFailed::failed;
}

void printMarksResult(enPassFailed passFailed){
string result=passFailed==enPassFailed::passed?"passed":"failed";
cout<<"You are "<<result<<endl;
}
//max----------------
void checkMax(int mark1, int mark2, int mark3) {
    if (mark1 > mark2 && mark1 > mark3) {
        cout << "mark1 is max: " << mark1 << endl;
    } else if (mark2 > mark1 && mark2 > mark3) {
        cout << "mark2 is max: " << mark2 << endl;
    } else {
        cout << "mark3 is max: " << mark3 << endl;
    }
}
//swap

void swapNumbers(int mark1, int mark2, int mark3){
	cout<<"mark1 = "<<mark1<<endl;
	cout<<"mark2 = "<<mark2<<endl;
	cout<<"mark3 = "<<mark3<<endl;
    int temp=mark1;
    mark1=mark2;
    mark2=mark3;
    mark3=temp;
	cout<<"after swap mark1 = "<<mark1<<endl;
	cout<<"after swap mark2 = "<<mark2<<endl;
	cout<<"after swap mark3 = "<<mark3<<endl;
}
//range
bool    validateNumberFromTO(int number, int from,int to){\
return (number>=from &&number<=to);
}
int readNumber(string message){
int number;
   cout << "Enter a number " << message << endl;
    cin >> number;
    return number;
}
void printNumberValidate(){
bool range=validateNumberFromTO(readNumber("to check range"),18,40);
string checkRange=range?"a Valid":"Invalid";

while(!range){
cout<<"You must enter number between (18-40) "<<endl;
range =validateNumberFromTO(readNumber("to check range"),18,40);
}
cout<<"You entered "<<checkRange<<endl;
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
//	int mark1,mark2,mark3;
//	readNumbers(mark1,mark2,mark3," to calculate the average of marks!");
//	printMarksResult(checkmarksPassOrFailed(checkAverageMarks(mark1,mark2,mark3)));
//	cout<<"mark1 = "<<mark1<<endl;
//	cout<<"mark2 = "<<mark2<<endl;
//	cout<<"mark3 = "<<mark3<<endl;
//	readNumbers(mark1,mark2,mark3," to check the max of numbers!");
//	checkMax(mark1,mark2,mark3);
//	readNumbers(mark1,mark2,mark3," to swap numbers!");
//    swapNumbers(mark1,mark2,mark3);
//readNumber(" to check range");
    printNumberValidate();
	cout << "\n\n***************************************************\n\n";
	return 0;
}
