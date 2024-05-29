#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<string> dreamStack;

    while (n--) {
        string command;
        cin >> command;

        if (command == "Sleep") {
            string name;
            cin >> name;
            dreamStack.push(name);
        } else if (command == "Kick") {
            if (!dreamStack.empty()) {
                dreamStack.pop();
            }
        } else if (command == "Test") {
            if (dreamStack.empty()) {
                cout << "Not in a dream" << endl;
            } else {
                cout << dreamStack.top() << endl;
            }
        }
    }

    return 0;
}