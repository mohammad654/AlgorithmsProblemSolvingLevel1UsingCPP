#include <iostream>
#include <limits>

using namespace std;
//Read Name--------------------
    string readName(){
            cout<<"what is your name?"<<endl;
            string name="";
            getline(cin,name);
        return name;
    }
void printName(string name){
    cout<<"Hallo "<<name<<endl;
}
//readNumber---------------------------------------
int readNumber(string message){
     int number;
       while(number<=0){
        cout<<message<<endl;
        cin>>number;
        }
    return number;
}
//checkOddOrEven---------------------------------------
enum enOddEven{Odd=1,Even=2};

void checkOddOrEven(int number){
    string oddEven=(number%2==0)?" is Even":" is Odd";
    cout<<number<<oddEven<<endl;
}

void checkOddOrEvenUsingEnum(int number){
    bool result=number%2==0;
    enOddEven checkOddEven=(result)?enOddEven::Even:enOddEven::Odd;
    string oddEven=(checkOddEven==enOddEven::Even)?" is Even Using Enum":" is Odd Using Enum";
    cout<<number<<oddEven<<endl;
}
//info driver licence
struct stPersonInfoDrive{
int age;
int hasDriveLicence;
string hasRecommendation;
};
stPersonInfoDrive readInfoDrive(string message){
    cout<<message<<endl;
    stPersonInfoDrive info;

    cout<<"How old are you ?"<<endl;
    cin>>info.age;
    while(info.age<21 || info.age>76 ){
     cout<<"age should be between (21-76)"<<endl;
     cin>>info.age;
     }

    cout << "Do you have a driver's license? (1=yes, 0=no): "<<endl;
    cin >> info.hasDriveLicence;

     while (info.hasDriveLicence != 1 && info.hasDriveLicence != 0) {
         cout << "Please enter 0 or 1 for your driver's license: "<<endl;
         cin >> info.hasDriveLicence;
     }
    cout << "Do you have Recommendation? (1=yes, 0=no): "<<endl;
      getline(cin,info.hasRecommendation);

     while (info.hasRecommendation != "yes" && info.hasRecommendation != "no") {
         cout << "Please enter (yes or no) for your Recommendation: "<<endl;
          getline(cin,info.hasRecommendation);
     }

return info;
}

void printPersonInfoDrive(stPersonInfoDrive info){
cout<<"age = "<<info.age<<endl;
cout<<"has drive licence  = "<<info.hasDriveLicence<<endl;
cout<<"has recommendation  = "<<info.hasRecommendation<<endl;
string result="";
if(info.hasRecommendation=="yes")
  result="Hired";
else
 result=info.age>21 && info.hasDriveLicence==1?"Hired":"Rejected";

cout<<"You are "<< result<<endl;
}
//stFullName---------------------------------
struct stFullName{
string firstName;
string lastName;
};
stFullName readFullName(){
    stFullName fullName;
    cout<<"what is your firstName?"<<endl;
     getline(cin,fullName.firstName);
     cout<<"what is your lastName?"<<endl;
     getline(cin,fullName.lastName);
return fullName;
}
void printFullName( stFullName fullName, bool reversed){
 cout<<"Your firstName is "<<fullName.firstName <<endl;
 cout<<"Your lastName is "<<fullName.lastName <<endl;
 if(reversed)
   cout<<"Your fullName is reversed "<<fullName.lastName<<" " <<fullName.firstName <<endl;
 else
    cout<<"Your fullName is "<<fullName.firstName<<" " <<fullName.lastName <<endl;
}
//Half of number---------------------------------
void halfOfNumber(int number){
cout<<"Half of "<< number<<" is "<<(float)number/2<<endl;
}
//check mark---------------------
enum enMark{pass=1,failed=0};

enMark checkMark(int mark){
    enMark result=mark>=50?enMark::pass:enMark::failed;
    return result;
}
void printMark(enMark mark){
string result =mark==enMark::pass?"passed":"failed";
cout<<"You are "<<result<<endl;
}

//sum of 3 number---------------------
float calculateSum(string message,string calculate){
int counter=0;
     cout<<message<<endl;
float a=0,b=0,c=0;
     cout<<"Enter number "<<++counter <<" to calculate "<<calculate<<" of numbers"<<endl;
     cin>>a;
     cout<<"Enter number "<<++counter <<" to calculate "<<calculate<<" of numbers"<<endl;
     cin>>b;
     cout<<"Enter number "<<++counter <<" to calculate "<<calculate<<" of numbers"<<endl;
    cin>>c;
    return a+b+c;
}
 void printSumOfNumbers(float sum){
 cout<<"Sum of 3 numbers = "<<sum<<endl;
 }
 void printAverageOfNumbers(float sum){
 cout<<"Average of 3 numbers = "<<sum/3<<endl;

 }

int main() {
	cout << "\n\n\n\n****************************************************\n\n";

	cout<<"4-AlgorithmsProblemSolvingLevel"<<endl;
//	    printName(readName());
//        checkOddOrEven(readNumber("Enter a positive number to check is even or odd !"));
//        checkOddOrEvenUsingEnum(readNumber("Enter a positive number to check is even/odd(UsingEnum)"));
//        printPersonInfoDrive(readInfoDrive("Information"));
    //    printFullName(readFullName(),false);
      //     halfOfNumber(readNumber("Enter a positive number to make it half"));
      //  printMark(checkMark(readNumber("Enter a mark to check pass or failed")));
        printSumOfNumbers(calculateSum("Enter numbers to calculate sum of entered numbers","Sum" ));
        printAverageOfNumbers(calculateSum("Enter numbers to calculate average of entered numbers","Average"));
    //cout<<<<endl;
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