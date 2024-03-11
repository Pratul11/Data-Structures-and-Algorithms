#include <bits/stdc++.h>
using namespace std;
void checkExpression(string exp)
{
    stack<char> st;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == '[' || exp[i] == '{' || exp[i] == '(')
        {
            st.push(exp[i]);
        }
        else
        {

            if (st.empty() ||
                (st.top() != '[' && exp[i] == ']') ||
                (st.top() != '{' && exp[i] == '}') ||
                (st.top() != '(' && exp[i] == ')'))
            {
                cout << "Unbalanced";
                return;
            }
            st.pop();
        }
    }
    cout << "Balanced";
}

int main()
{
    string exp = "[()]{}{[(())]()}";
    checkExpression(exp);
    return 0;
}