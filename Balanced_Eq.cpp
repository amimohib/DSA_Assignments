#include <iostream>
#include <stack>
using namespace std;
bool matching(char a, char b);
bool isBalanced(const string &str)
{
    stack<char> s;
    for (char x : str)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            s.push(x);
        }
        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            if (matching(s.top(), x) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}

bool matching(char a, char b)
{
    return (a == '(' && b == ')') ||
           (a == '[' && b == ']') ||
           (a == '{' && b == '}');
}
int main()
{
    string str = "[()]"; // with out const Give me a real variable — I might change it, so I need the actual memory location.
    cout << str << "  " << isBalanced(str) << endl
         << endl;
    cout << "((())" << isBalanced("((())") << endl
         << endl;
    cout << "([)]" << isBalanced("([)]") << endl
         << endl;
    cout << "{}([()])" << isBalanced("{}([()])") << endl
         << endl;
    cout << "(()))" << isBalanced("(()))") << endl
         << endl;
    return 0;
}