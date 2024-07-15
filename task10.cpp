#include <iostream>
#include <string>
using namespace std;

void validateNickname(const string &nickname) {
    if (nickname.length() > 8) {
        throw "Nickname must not be longer than 8 characters!";
    }
    for (char c : nickname) {
        if (isdigit(c) || !isalnum(c) || c == ' ') {
            throw "Nickname must not contain digits, special symbols, or spaces!";
        }
    }
    cout << "Nickname is valid: " << nickname << endl;
}

int main() {
    string nickname;
    cout << "Enter your nickname: ";
    cin >> nickname;
    try {
        validateNickname(nickname);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
