#include <iostream>
#include <string>
using namespace std;

void validateUsername(const string &username) {
    if (username.length() < 6) {
        throw "Username must have at least 6 characters!";
    }
    for (char c : username) {
        if (isdigit(c) || !isalnum(c)) {
            throw "Username must not contain digits or special symbols!";
        }
    }
    cout << "Username is valid: " << username << endl;
}

int main() {
    string username;
    cout << "Enter your username: ";
    cin >> username;
    try {
        validateUsername(username);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
