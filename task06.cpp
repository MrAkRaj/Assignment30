#include <iostream>
#include <string>
using namespace std;

void validatePinCode(const string &pin) {
    if (pin.length() != 6 || !isdigit(pin[0])) {
        throw "Pin code must contain exactly 6 digits!";
    }
    cout << "Pin code is valid: " << pin << endl;
}

int main() {
    string pin;
    cout << "Enter your area pin code: ";
    cin >> pin;
    try {
        validatePinCode(pin);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
