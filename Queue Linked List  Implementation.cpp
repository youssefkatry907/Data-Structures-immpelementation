//                                 **********************************************************
//                                *                                                        *
//                                            وَأَن لَّیۡسَ لِلۡإِنسَـٰنِ إِلَّا مَا سَعَىٰ وَأَنَّ سَعۡیَهُۥ سَوۡفَ یُرَىٰ
//                              *                                                        *
//                             **********************************************************
/*
─────────▄──────────────▄──────────────────────────────────────────────
────────▌▒█───────────▄▀▒▌────────────────────────────────────────────────
────────▌▒▒█────────▄▀▒▒▒▐────────────────────────────────────────────────
───────▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐────────────▄▄▄▄─▄▄▄▄────▄▄▄▄─▄▄▄▄─▄▄▄▄─▄───────
─────▄▄▀▒░▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐────────────█▄▄▄─█──█────█────█──█─█──█─█───────
───▄▀▒▒▒░░░▒▒▒░░░▒▒▒▀██▀▒▌──────── ───▄▄▄█─█▄▄█────█▄▄▄─█▄▄█─█▄▄█─█▄▄▄────
──▐▒▒▒▄▄▒▒▒▒░░░▒▒▒▒▒▒▒▀▄▒▒▌───────────────────────────────────────────────
──▌░░▌█▀▒▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐───────────────────────────────────────────────
─▐░░░▒▒▒▒▒▒▒▒▌██▀▒▒░░░▒▒▒▀▄▌──────────────────────────────────────
─▌░▒▄██▄▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▌──────────────────────────────────────────────
▀▒▀▐▄█▄█▌▄░▀▒▒░░░░░░░░░░▒▒▒▐────Joo Qatry───────────────────────────
▐▒▒▐▀▐▀▒░▄▄▒▄▒▒▒▒▒▒░▒░▒░▒▒▒▒▌──────────────────────────────────────────
▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒▒▒░▒░▒░▒▒▐───────────▄─────▄─▄▄▄▄─▄─────▄───────────────
─▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒░▒░▒░▒░▒▒▒▌───────────▀▄─█─▄▀─█──█─▀▄─█─▄▀───────────────
─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▒▄▒▒▐─────────────▀▄▀▄▀──█▄▄█──▀▄▀▄▀────────────────
──▀▄▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▄▒▒▒▒▌───────────────────────────────────────────────
────▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀────────────────────────────────────────────────
──────▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀────────────────────────────────────
─────────▒▒▒▒▒▒▒▒▒▒▀▀─────────────────────────────────────────────────────
─────────────────────────────────────────────────────────────────
─────────▄───▄─▄──▄─▄▄▄▄─▄──▄────▄▄▄▄─▄▄▄▄─▄▄▄──▄▄▄───────────────────────
─────────█▀▄▀█─█──█─█────█▄▄█────█────█──█─█──█─█▄▄───────────────────────
─────────█───█─█▄▄█─█▄▄▄─█──█────█▄▄▄─█▄▄█─█▄▄▀─█▄▄───────────────────────
──────────────────────────────────────────────────────────────────────────
*/

#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double lld;
#define endl "\n";
#define all(v)                ((v).begin()), ((v).end())

class Queue {
private:
    struct Node {
        int data;
        Node *next;
    };
    Node *front = NULL, *tail = NULL;

public:
    bool isEmpty() {
        if (front == NULL && tail == NULL) return true;
        else return false;
    }

    void enqueue(int val) {
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if (isEmpty()) front = tail = newNode; // In the first node the front equal tail
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) return;
        Node *temp = front;
        if (front == tail) front = tail = NULL; // If the linked list has only one node
        else front = front->next;
        delete temp;
    }

    int frontValue() {
        if (isEmpty()) return -1;
        else return front->data;
    }
};

int main() {
    Queue Q; // First in first out (FIFO)
    Q.enqueue(5);
    Q.enqueue(7);
    Q.enqueue(1);
    Q.enqueue(3);
    while (!Q.isEmpty()) {
        cout << Q.frontValue() << endl;
        Q.dequeue();
    }
    return 0;
}