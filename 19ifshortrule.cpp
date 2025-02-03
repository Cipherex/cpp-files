#include <iostream>
using namespace std;

// Function with an infinite loop inside
bool someFunction() {
    while (true) { // Infinite loop inside the function
        cout << "This is an infinite loop inside the function!" << endl;
    }
    return true; // This line will never be reached due to the infinite loop
}

int main() {
    if (true || someFunction()) { // First condition is true, second is from the function which never runs cause of first to be trur(short circuiting)
        cout << "Condition satisfied!" << endl;
    }
    return 0;
}
