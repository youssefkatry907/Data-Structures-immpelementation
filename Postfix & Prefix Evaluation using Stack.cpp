//                                 **********************************************************
//                                *                                                        *
//                                            وَأَن لَّیۡسَ لِلۡإِنسَـٰنِ إِلَّا مَا سَعَىٰ وَأَنَّ سَعۡیَهُۥ سَوۡفَ یُرَىٰ
//                              *                                                        *
//                             **********************************************************
//                                                Joo Qatry

// ███▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓█
// ███▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓█
// ███████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓█
// ████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█
// ███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█
// ████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█
// ███▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// █████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// █████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
// █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
// ████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
// ████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██
// █████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██
// █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███
// ██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███
// ███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████
// ███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████
// ████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████
// █████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████
// ██████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓███████
// ███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████
// ██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████
// ███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████

#include <bits/stdc++.h>
using namespace std;

//Postfix_Evaluation

float MathOperation(float op1, float op2, char operation) {
    if (operation == '+')
        return op1 + op2;
    else if (operation == '-')
        return op1 - op2;
    else if (operation == '*')
        return op1 * op2;
    else if (operation == '/')
        return op1 / op2;
    else
        return 0;
}

float postfix_Evaluate(string exp) {
    stack<float> st;
    for (int i = 0; i < exp.length(); i++) {
        if (isdigit(exp[i]))
            st.push(exp[i] - '0');// A method to convert char int didgit (Ascii code)
        else {
            float op2 = st.top();
            st.pop();

            float op1 = st.top();
            st.pop();

            float result = MathOperation(op1, op2, exp[i]);
            st.push(result);
        }

    }
    return st.top();//The last value in stack
}
//___________________________________________________

//Prefix_Evaluation

float MathOperation(float op1, float op2, char operation) {
    if (operation == '+')
        return op1 + op2;
    else if (operation == '-')
        return op1 - op2;
    else if (operation == '*')
        return op1 * op2;
    else if (operation == '/')
        return op1 / op2;
    else
        return 0;
}

float prefix_Evaluate(string exp) {
    stack<float> st;
    for (int i = exp.length() - 1; i >= 0; i--) {
        if (isdigit(exp[i]))
            st.push(exp[i] - '0');// A method to convert char int didgit (Ascii code)
        else {
            float op1 = st.top();
            st.pop();

            float op2 = st.top();
            st.pop();

            float result = MathOperation(op1, op2, exp[i]);
            st.push(result);
        }

    }
    return st.top();//The last value in stack
}

int main() {
    string postfixExpression = {"382/+5-"};
    cout << postfix_Evaluate(postfixExpression) << endl;//2

    string prefixExpression = {"+3-72"};
    cout << prefix_Evaluate(prefixExpression) << endl;//8

    return 0;
}

