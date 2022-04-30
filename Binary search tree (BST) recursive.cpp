//
//Recursion Method
//__________________________
#include <bits/stdc++.h>

using namespace std;

class BST {
private:

    struct Node {
        int data;
        Node *Rigth;
        Node *Left;

        Node(int value) {
            data = value;
            Left = Rigth = nullptr;
        }
    };

    Node *root = nullptr;

public:
    void addHelper(Node *temp, int value) {
        if (value <= temp->data) {
            if (temp->Left == nullptr) {

                temp->Left = newNode(value);
            } else {
                addHelper(temp->Left, value);
            }
            else{
                if (temp->Rigth == nullptr) {

                    temp->Rigth = newNode(value);
                } else {
                    addHelper(temp->Rigth, value);
                }
            }

        }

        void add(int value) {
            if (root == nullptr) {

                root = newNode(value);
            } else {
                addHelper(root, value);
            }
        }


        int main() {
            int x = 10;
            cout << "Hello World" << " " << x << endl;

            return 0;
        }