//                                 **********************************************************
//                                *                                                        *
//                               وَأَن لَّیۡسَ لِلۡإِنسَـٰنِ إِلَّا مَا سَعَىٰ وَأَنَّ سَعۡیَهُۥ سَوۡفَ یُرَىٰ         *
//                              *                                                        *
//                             **********************************************************
#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define all(v)                ((v).begin()), ((v).end())
#define endl '\n';

int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        bool balanced = true;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else {
                if (st.empty()) {
                    balanced = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }

        cout << (balanced && st.empty() ? "YES\n" : "NO\n");
        //3
        //(())
        //((()
        //()))
        //YES
        //NO
        //NO 
    }
    return 0;
}

________________________________________________________________

#include <iostream>
using namespace std;

struct stack {

    int arr[100];
    int top = -1;// it's position under stack(under zero)
    void push(int val) {
        if (top == 99)return;
        top++;
        arr[top] = val;
    }

    void pop() {
        if (isEmpty())return;
        top--;
    }

    int top_value() {
        if (isEmpty()) return -1;
        return arr[top];
    }

    bool isEmpty() {
        if (top == -1)return true;
        else return false;
    }
};

bool Pair(char open, char closed) {
    if (open == '(' && closed == ')')return true;
    else if (open == '[' && closed == ']')return true;
    else if (open == '{' && closed == '}')return true;
    return false;
}

bool Balanced(string exp) {
    stack open_brackets;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            open_brackets.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (open_brackets.isEmpty()) return false;
            else if (Pair(open_brackets.top_value(), exp[i]) == false) return false;

            open_brackets.pop();
        }
    }
    if (open_brackets.isEmpty()) return true;
    else
        return false;
}

int main() {
    string s;
    cin >> s;
    if (Balanced(s))
        cout << "The string is Balanced" << endl;
    else
    cout << "The string is not Balanced" << endl;
    /*stack st;
    st.push(5);
    st.push(7);
    st.push(0);
    while (!st.isEmpty())
    {
        cout << st.top_value() << endl;
        st.pop();
    }*/
    return 0;
}