#include <iostream>
#include <string>
using namespace std;

void testException(int choice) {
    if (choice == 1) {
        throw 10;  // Throwing integer exception
    } else if (choice == 2) {
        throw string("String Exception");  // Throwing string exception
    }
}

int main() {
    try {
        testException(1);  // Change to 2 to test string exception
    } catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    } catch (string &e) {
        cout << "Caught a string exception: " << e << endl;
    }
    return 0;
}
