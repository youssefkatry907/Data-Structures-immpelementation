#include <bits/stdc++.h>

using namespace std;

int priority(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return 0;

}

string infix_to_postfix(string exp) {
    stack<char> st;
    string output = "";
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == ' ') continue;

        if (isdigit(exp[i]) || isalpha(exp[i]))
            output += exp[i];
        else if (exp[i] == '(')
            st.push('(');
        else if (exp[i] == ')') {
            while (st.top() != '(') {
                output += st.top();
                st.pop();
            }
            st.pop();//Remove the ' ( '
        } else {
            while (!st.empty() && priority(exp[i]) <= priority(st.top())) {
                output += st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
    }
    while (!st.empty()) {
        output += st.top();
        st.pop();

    }
    return output;
}

int main() {
    string infixExpression = {"(3+2)+7/2*((7+3)*2)"};
    cout << infix_to_postfix(infixExpression) << endl;

    return 0;
}