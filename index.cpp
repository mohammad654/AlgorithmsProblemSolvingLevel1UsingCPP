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
void sumNumbers(){
int number =0;
float sum =0;
int counter=1;
while(true){
 number= readNumber("Enter a positive number "+to_string(counter)+" ot sum entered numbers");
 if(number == 1)
    break;
  sum +=number;
  counter++;
}
cout<<"Sum of numbers = "<<sum<<endl;

}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
    sumNumbers();
    cout<<"Mohammad"<<endl;

	cout << "\n\n***************************************************\n\n";
	return 0;
}
/*
 	cout<<""<<endl;

      g++ index.cpp -o index.exe
           .\index.exe

      $env:PATH += ";C:\Programmeren\C++\mosh"

    Problem.cpp
  */