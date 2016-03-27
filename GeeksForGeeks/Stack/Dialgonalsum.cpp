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

void verticalsum(Node *temp, int level) {

    if (temp == NULL) return;
    verticalsum(temp->left, level + 1);
    h[level] += temp->data;
    verticalsum(temp->right, level - 1);
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

//    head->right->right->right = createTree(9);
    for (int i = -6; i < 6; i++) {
        h[i] = 0;
    }

    verticalsum(head, 0);
    for (int i = -6; i < 6; i++) {
        cout << i << " " << h[i] << endl;
    }
    return 0;
}

