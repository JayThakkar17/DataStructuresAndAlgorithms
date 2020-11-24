#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return -1;
}

void infixToPostfix(string infix)
{
    stack<char> st;
    st.push('N');
    int l = infix.length();
    string ns;

    for (int i = 0; i < l; i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
            ns += infix[i];

        else if (infix[i] == '(')
            st.push('(');

        else if (infix[i] == ')')
        {
            while (st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        else
        {
            while (st.top() != 'N' && precedence(infix[i]) <= precedence(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(infix[i]);
        }
    }
    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
    cout << ns << endl;
}

int main()
{
    string infix = "a+b+c+d";
    infixToPostfix(infix);

    return 0;
}