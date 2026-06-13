#include <iostream>
#include <stack>
#include <string>
using namespace std;

int Postfix(string expr) {
    stack<int> s;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (isdigit(ch)) {
            s.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            if (s.size() < 2) {
                cout << "Error: Invalid postfix expression" << endl;
                return -1;
            }
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();
            int result;
            switch(ch) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/':
                    if (op2 == 0) {
                        cout << "Error: Division by zero" << endl;
                        return -1;
                    }
                    result = op1 / op2;
                    break;
            }
            s.push(result);
        }
    }
    if (s.size() != 1) {
        cout << "Invalid postfix expression" << endl;
        return -1;
    }
    return s.top();
}

int main() {

    string test1 = "23+";
    string test2 = "53*2+";
    string test3 = "842-*";

    cout << "Result: " << Postfix(test1) << endl;

    cout << "Result: " << Postfix(test2) << endl;

    cout << "Result: " << Postfix(test3) << endl;

    cout << "Result: " << Postfix("30/") << endl;

    return 0;
}
