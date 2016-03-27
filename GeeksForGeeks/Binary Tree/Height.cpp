#include<bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void Inorder(Node *head) {
    if (head == NULL)
        return;
    Inorder(head->left);
    cout << head->data << " ";
    Inorder(head->right);

}

void Mirror(struct Node *node) {
    if (node == NULL)
        return;
    else {
        struct Node *temp;

        Mirror(node->left);
        Mirror(node->right);

        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

int main() {
    Node *head = NULL;
    head = newNode(4);
    head->left = newNode(5);
    head->left->left = newNode(6);

    head->left->right = newNode(7);

    head->left->right->right = newNode(8);

    head->left->right->right->right = newNode(9);
    head->right = newNode(10);
    head->right->left = newNode(12);
    head->right->right = newNode(11);
    head->right->right->right = newNode(13);
    head->right->right->right->right = newNode(14);
    Inorder(head);
    cout << endl;
    Mirror(head);
    Inorder(head);
    return 0;
}
