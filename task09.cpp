#include <iostream>
#include <string>
using namespace std;

void validateGmail(const string &email) {
    if (email.find('@') == string::npos || email.find("gmail.com") == string::npos) {
        throw "Gmail ID must contain '@' and 'gmail.com'!";
    }
    cout << "Gmail ID is valid: " << email << endl;
}

int main() {
    string email;
    cout << "Enter your Gmail ID: ";
    cin >> email;
    try {
        validateGmail(email);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
