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

int LevelOrderTraversal(Node *head) {
    int c = 0;
    queue<Node *> q;
    q.push(head);
    while (!q.empty()) {
        Node *temp = q.front();
        //      cout<<temp->data<<" ";
        c++;
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
        q.pop();
    }
    return c;
}

bool Identical(Node *head1, Node *head2) {
    if (head1 == NULL && head2 == NULL)
        return 1;
    if (head1 == NULL && head2 != NULL)
        return 0;
    if (head1 != NULL && head2 == NULL)
        return 0;
    if (head1->data != head2->data)
        return 0;
    return (Identical(head1->left, head2->left) && Identical(head1->right, head2->right));

}

int Height(Node *head) {
    if (head == NULL)
        return 0;
    int l = Height(head->left);
    int r = Height(head->right);
    return max(l, r) + 1;
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
    cout << Height(head);
    return 0;
}
