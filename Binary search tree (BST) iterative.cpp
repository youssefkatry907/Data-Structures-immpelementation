//Iterator Method
//_____________________
#include <bits/stdc++.h>

using namespace std;

class BST {
private:

    struct Node {
        int data;
        Node *Rigth;
        Node *Left;
    };
    Node *root = nullptr;

public:

    void add(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->Rigth = nullptr;
        newNode->Left = nullptr;
    }

    if(root == nullptr){
        root = newNode;
        return;
    }

    Node *temp = root;
    Node *parent = nullptr;

    while(temp!=nullptr){
        parent = temp;
        if (value <= temp->data) {
            temp = temp->Left;
        } else {
            temp = temp->Rigth;
        }
    }

    if(value<=parent->data)
    parent->
    Left = newNode;

    else
    parent->
    Rigth = newNode;

};

int main() {
    int x = 10;
    cout << "Hello World" << " " << x << endl;

    return 0;
}


