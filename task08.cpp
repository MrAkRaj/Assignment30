#include <iostream>
#include <string>
using namespace std;

void validatePassword(const string &password) {
    if (password.length() < 6) {
        throw "Password must have at least 6 characters!";
    }
    bool hasDigit = false, hasSpecialChar = false, hasCapitalLetter = false;
    for (char c : password) {
        if (isdigit(c)) hasDigit = true;
        if (ispunct(c)) hasSpecialChar = true;
        if (isupper(c)) hasCapitalLetter = true;
    }
    if (!hasDigit) throw "Password must contain at least one digit!";
    if (!hasSpecialChar) throw "Password must contain at least one special character!";
    if (!hasCapitalLetter) throw "Password must contain at least one capital letter!";
    cout << "Password is valid." << endl;
}

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;
    try {
        validatePassword(password);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
