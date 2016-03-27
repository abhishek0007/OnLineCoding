#include<bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
};
int h[100];
Node *head = NULL;

Node *createTree(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void LevelOrder(Node *temp) {
    queue<Node *> q;
    q.push(temp);
    q.push(NULL);
    Node *temp1;
    int k = 0;
    int a[28];
    while (!q.empty()) {
        temp1 = q.front();
        q.pop();
        if (temp1 == NULL) {
            Node *hhh = q.front();
            if (hhh != NULL)
                cout << hhh->data << " ";
            if (!q.empty())
                q.push(NULL);
        }
        else {
            if (temp1->left) q.push(temp1->left);
            if (temp1->right) q.push(temp1->right);
        }
    }
}

int main() {
    head = createTree(0);
    head->left = createTree(1);
    head->right = createTree(2);
    head->left->left = createTree(4);
    head->left->right = createTree(5);
    head->left->right->left = createTree(7);
    head->right->left = createTree(3);
    head->right->right = createTree(6);
    LevelOrder(head);
}
