#include <iostream>
using namespace std;

int main() {
    int choice;

        cin >> choice;

        switch(choice) {
            case 1: {
                int a, b;
                cin >> a >> b;
                cout << (a + b) << endl;
                break;
            }
            case 2: {
                int a, b;
                cin >> a >> b;
                cout << (a - b) << endl;
                break;
            }
            case 3: {
                int a, b;
                cin >> a >> b;
                cout << (a * b) << endl;
                break;
            }
            case 4: {
                int a, b;
                cin >> a >> b;
                if (b != 0)
                    cout << (a / b) << endl;
                else
                    cout << "Error: Division by zero" << endl;
                break;
            }
            case 5: {
                int a, b;
                cin >> a >> b;
                if (b != 0)
                    cout << (a % b) << endl;
                else
                    cout << "Error: Division by zero" << endl;
                break;
            }
            case 6:
                return 0;
            default:
                cout << "Invalid Operation" << endl;
        }
    

    return 0;
}
