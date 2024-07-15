#include <iostream>
#include <string>
using namespace std;

void validateEmail(const string &email) {
    if (email.find('@') == string::npos) {
        throw "Email must contain '@' symbol!";
    }
    cout << "Email is valid: " << email << endl;
}

int main() {
    string email;
    cout << "Enter your email address: ";
    cin >> email;
    try {
        validateEmail(email);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
