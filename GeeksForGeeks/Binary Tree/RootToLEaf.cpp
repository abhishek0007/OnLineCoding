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

void pri(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void printG(Node *head, int a[], int n) {
    if (head == NULL)
        return;
    a[n] = head->data;
    n++;
    if (head->left == NULL && head->right == NULL) {
        pri(a, n);
        return;
    }

    printG(head->left, a, n);
    printG(head->right, a, n);

}

void RootToLeaf(Node *head) {
    int a[100];
    printG(head, a, 0);
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
    RootToLeaf(head);
    return 0;
}
