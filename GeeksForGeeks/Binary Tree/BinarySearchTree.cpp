#include<bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
};
Node *head = NULL;

Node *newNode(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct Node *insert(struct Node *node, int key) {
    if (node == NULL) return newNode(key);
    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    return node;
}

void inorder(Node *temp) {
    if (temp) {
        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }
}

int main() {
    head = insert(head, 100);
    insert(head, 20);
    insert(head, 10);
    insert(head, 30);
    insert(head, 150);
    insert(head, 130);
    inorder(head);
    return 0;
}
