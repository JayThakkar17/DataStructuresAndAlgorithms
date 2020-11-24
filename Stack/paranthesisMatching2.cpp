#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string exp)
{
    stack<char> s;

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            s.push(exp[i]);
            continue;
        }

        if (s.empty())
            return false;

        char c = s.top();

        switch (exp[i])
        {
        case ')':
            if (c != '(')
                return false;
            break;

        case '}':
            if (c != '{')
                return false;
            break;

        case ']':
            if (c != '[')
                return false;
            break;

        default:
            break;
        }

        s.pop();
    }
    return s.empty();
}

int main()
{
    string s = "[{()}]";

    if (isBalanced(s))
        cout << "true!" << endl;
    else
        cout << "false!" << endl;

    return 0;
}