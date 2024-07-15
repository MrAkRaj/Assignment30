#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero error!";  // Throwing a C-string exception
    }
    cout << "Result of division: " << a / b << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers for division (a / b): ";
    cin >> a >> b;
    try {
        divide(a, b);
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
