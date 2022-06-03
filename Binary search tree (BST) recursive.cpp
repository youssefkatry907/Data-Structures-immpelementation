//
//Recursion Method
//__________________________
 #include <bits/stdc++.h>

    using namespace std;

    template<class t>

    class BST {
    private:
        struct Node {
            t data;
            Node *left;
            Node *right;

            Node(t value) {
                data = value;
                left = right = nullptr;
            }
        };

        Node *root = nullptr;

        void addHelper(Node *temp, t value) {
            if (value <= temp->data) {
                if (temp->left == nullptr) {
                    temp->left = new Node(value);
                } else {
                    addHelper(temp->left, value);
                }
            } else {
                if (temp->right == nullptr) {
                    temp->right = new Node(value);
                } else {
                    addHelper(temp->right, value);
                }
            }
        }

        t getMaxHelper(Node *temp) {
            if (temp->right == nullptr) {
                return temp->data;
            } else {
                return getMaxHelper(temp->right);
            }
        }

        t getMinHelper(Node *temp) {
            if (temp->left == nullptr) {
                return temp->data;
            } else {
                return getMaxHelper(temp->left);
            }
        }

        t getHeightHelper(Node *temp) {
            if (temp == nullptr) return -1; // Found empty subtree

            int l = getHeightHelper(temp->left);
            int r = getHeightHelper(temp->right);
            return 1 + max(l, r);
        }

        void preOrder(Node *temp) {
            if (temp == nullptr) return;
            // cout in first preorder
            cout << temp->data << " ";
            preOrder(temp->left);
            // cout in midlle inorder
            preOrder(temp->right);
            // cout in end postorder

        }

    public:
        void add(t value) {
            if (root == NULL) {
                root = new Node(value);
            } else {
                //We pass root in argument because temp will point on root
                addHelper(root, value);
            }
        }

        t getMax() {
            return getMaxHelper(root);
        }

        t getMin() {
            return getMinHelper(root);
        }

        int getHeight() {
            if (root == nullptr) {
                return -1;
            } else {
                return getHeightHelper(root);
            }
        }

        void displayLevelOrder() {
            if (root == nullptr) return;
            queue<Node *> q;
            q.push(root);
            while (!q.empty()) {
                Node *current = q.front();
                q.pop();
                cout << current->data << " ";
                if (current->left != nullptr) q.push(current->left);
                if (current->right != nullptr) q.push(current->right);
            }
            cout << endl;
        }

        void displayPlayOrder() {
            preOrder(root);
        }

    };

    int main() {
        BST<int> bst;
        bst.add(15);
        bst.add(6);
        bst.add(20);
        bst.add(25);
        bst.add(9);
        bst.add(3);
        bst.add(8);

        bst.displayPlayOrder();

    }
