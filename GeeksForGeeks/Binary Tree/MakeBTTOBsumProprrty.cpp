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

void makeitSumTree(Node *head) {
    int l = 0, r = 0;
    if (head == NULL || head->left == NULL || head->right == NULL)
        return;
    if (head->left)
        l = head->left->data;
    if (head->right)
        r = head->right->data;

    if (l + r > head->data && head->right != NULL) {
        head->right->data = head->data - l;
        r = head->right->data;
    }

    else if (l + r > head->data && head->right == NULL) {
        head->left->data = head->data - r;
        l = head->left->data;
    }

    else if (l + r < head->data && head->left != NULL) {
        head->left->data = l + (head->data - (r + l));
        l = head->left->data;
    }
    if (l + r == head->data) {
        makeitSumTree(head->left);
        makeitSumTree(head->right);
    }

}

void LevelOrderTraversal(Node *head) {
    queue<Node *> q;
    q.push(head);
    while (!q.empty()) {
        Node *temp = q.front();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
        q.pop();
    }

}

int main() {
    Node *head = NULL;
    head = newNode(10);
    head->left = newNode(8);
    head->left->left = newNode(5);

    head->left->right = newNode(9);

    head->right = newNode(5);
    head->right->left = newNode(8);
    head->right->left->right = newNode(3);
    LevelOrderTraversal(head);
    makeitSumTree(head);
    cout << endl;
    LevelOrderTraversal(head);
    return 0;
}
