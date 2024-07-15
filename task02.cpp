#include <iostream>
using namespace std;

void checkValue(int x) {
    if (x < 0) {
        throw "Negative value error!";  // Throwing a C-string exception
    }
    cout << "Value is: " << x << endl;
}

int main() {
    try {
        checkValue(-1);  // This will throw an exception
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
