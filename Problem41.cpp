#include <iostream>

using namespace std;

float readHours(string message) {
    float number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

float HoursToDays(int hours) {
    return hours / 24.0f;
}

float HoursToWeek(int hours) {
    return hours / (24.0f * 7.0f);
}

float DaysToWeek(float days) {
    return days / 7.0f;
}

int main() {
    std::cout << "\n\n\n\n****************************************************\n\n";
    float hours = readHours("Please enter number of hours");
    cout << "The total hours = " << hours << endl;
    cout << "Hours To Days = " << HoursToDays(hours) << endl;
    cout << "Hours To Week = " << HoursToWeek(hours) << endl;
    cout << "Days To Week = " << DaysToWeek(HoursToDays(hours)) << endl;

    std::cout << "\n\n***************************************************\n\n";
    return 0;
}

