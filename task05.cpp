#include <iostream>
#include <string>
using namespace std;

void validateMobileNumber(const string &number) {
    if (number.length() != 10 || !isdigit(number[0])) {
        throw "Mobile number must contain exactly 10 digits!";
    }
    cout << "Mobile number is valid: " << number << endl;
}

int main() {
    string number;
    cout << "Enter your mobile number: ";
    cin >> number;
    try {
        validateMobileNumber(number);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
