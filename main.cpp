#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char **argv) {

    stack<string> typing, undo, temp;
    int n;
    char command;
    string text;


    cin >> n;

    for (int i = 1; i < n+1; i++) {

        cin >> command;

        if (command == 't') {

            cin >> text;
            typing.push(text);

        }

        if (command == 'u') {

            if (typing.empty()) {

                cout << "nothing to undo on command " << i << endl;

            }
            else {

                undo.push(typing.top());
                typing.pop();

            }

        }

        if(command == 'r') {

            if (undo.empty()) {

                cout << "nothing to redo on command " << i << endl;

            }

            else {

                typing.push(undo.top());
                undo.pop();

            }

        }

    }

    while(!typing.empty()) {

        temp.push(typing.top());
        typing.pop();

    }

    cout << "Typing Stack : ";
    while(!temp.empty()) {

        cout << temp.top();
        temp.pop();

        if(!temp.empty()) {

            cout << " ";

        }

    }
    cout << endl;

    cout << "Undo Stack   : ";
    while(!undo.empty()) {

        temp.push(undo.top());
        undo.pop();

    }


    while(!temp.empty()) {

        cout << temp.top();
        temp.pop();

        if(!temp.empty()) {

            cout << " ";

        }

    }
    cout << endl;


    return 0;
}
