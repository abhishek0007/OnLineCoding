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

    cout << LevelOrderTraversal(head);

    return 0;
}
