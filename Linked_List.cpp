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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double lld;
#define endl "\n";
#define all(v)                ((v).begin()), ((v).end())

class LinkedList {
    struct Node {
        int data;
        Node *Next;
    };
    Node *Head = NULL;
    Node *first = NULL, *second = NULL;

public:
    bool isEmpty() {
        if (Head == NULL) return true;
        else return false;
    }

    int length() {
        int cnt = 1;
        Node *temp = Head;
        while (temp->Next != NULL) {
            ++cnt;
            temp = temp->Next;
        }
        return cnt;
    }

    void print() {
        Node *temp = Head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->Next;
        }
        if (!isEmpty()) cout << endl;
    }

    void addAsHead(int val) {//add element at the beginning of list
        Node *newNode = new Node;
        newNode->data = val;
        newNode->Next = Head;
        Head = newNode;
    }

    void addAsTail(int val) {//add element at the end of list

        Node *newNode = new Node;
        newNode->data = val;//(*newNode).data = val;
        newNode->Next = NULL;//(*newNode).Next = NULL;

        if (Head == NULL) {
            Head = newNode;
        } else {
            Node *temp = Head;
            while (temp->Next != NULL) {//Searchig for Last Node which Next node is null
                temp = temp->Next;//Moving to last node
            }
            temp->Next = newNode;//connect newNode with Next node
        }
    }

    void sortList() {
        Node *current = Head, *index = NULL;
        int temp;
        if (Head == NULL) return;
        else {
            while (current != NULL) {
                index = current->Next;

                while (index != NULL) {

                    if (current->data > index->data) {
                        temp = current->data;
                        current->data = index->data;
                        index->data = temp;
                    }
                    index = index->Next;
                }
                current = current->Next;
            }
        }

    }

    void addSorted(int val) {

        Node *newNode = new Node;
        newNode->data = val;
        newNode->Next = NULL;

        if (val <= Head->data) {
            newNode->Next = Head;
            Head = newNode;
            return;
        }
        Node *temp = Head;
        while (temp->Next != NULL) {
            if (val <= temp->data) {
                newNode->Next = temp->Next;
                temp->Next = newNode;
                return;
            }
            temp = temp->Next;
        }
    }

    int NodeFind(int val) {
        int ans = -1;
        Node *temp = Head;
        while (temp != NULL) {
            if (temp->data == val) {
                ans = temp->data;
                break;
            }
            temp = temp->Next;
        }
        return ans;
    }

    void reverse() {
        if (Head == NULL) return;
        Node *prev = NULL; //1
        Node *curr = Head; //2
        Node *Next = NULL; //3
        while (curr != NULL) {
            Next = curr->Next; //reverse pointers
            curr->Next = prev; //reverse pointers
            prev = curr;// 2 1 3
            curr = Next; // 2 3 1
        }
        Head = prev; // 3 2 1
    }

    int popHead() {
        Node *temp = Head;
        Head = Head->Next;
        delete temp;
        return Head->data;
    }

    void removeAll(int val) {

        if (Head == NULL) return;
        Node *prev, *temp;
        prev = temp = Head;

        while (temp != NULL) {
            if (temp->data == val) {
                if (temp == Head) {
                    Head = temp->Next;
                    delete temp;
                    temp = Head;
                } else {
                    prev->Next = temp->Next;
                    delete temp;
                    temp = prev->Next;
                }
            } else {
                prev = temp;
                temp = temp->Next;
            }
        }
        return;
    }

    void removeFirst(int val) {
        if (Head == NULL)
            return;
        Node *prev, *temp;
        prev = temp = Head;

        if (Head->data == val) {//if the value that we want to remove located at Head node
            Head = temp->Next;
            delete temp;
            return;
        }
        while (temp->data != val && temp != NULL)//temp!=NULL means that temp isn't located at the end of list
        {//temp->data!=val " means that we doesn't reach the position which has the wanted value"
            prev = temp;
            temp = temp->Next;
        }
        if (temp == NULL) return;
        else {
            prev->Next = temp->Next;
            delete temp;
            return;
        }
    }

};

int main() {
    fast
    LinkedList list;
    list.addAsTail(7);
    list.addAsTail(5);
    list.addAsTail(1);
    list.addAsTail(2);
    list.addAsTail(3);
    list.addAsTail(4);
    list.addAsTail(4);
    list.removeFirst(3);
    list.print();
    list.removeAll(4);
    list.reverse();
    list.popHead();
    list.sortList();
    list.addSorted(5);
    list.addAsHead(10);
    list.print();
    list.NodeFind(7);
    if (!list.isEmpty()) cout << list.length();
    else cout << 0;
    return 0;
}
