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


int isSumProperty(Node *Node) {

    int left = 0, right = 0;


    if (Node == NULL ||
        (Node->left == NULL && Node->right == NULL))
        return 1;
    else {

        if (Node->left != NULL)
            left = Node->left->data;

        if (Node->right != NULL)
            right = Node->right->data;


        if ((Node->data == left + right) &&
            isSumProperty(Node->left) &&
            isSumProperty(Node->right))
            return 1;
        else
            return 0;
    }
}

int main() {
    Node *head = NULL;
    head = newNode(10);
    head->left = newNode(8);
    head->left->left = newNode(5);

    head->left->right = newNode(3);

    head->right = newNode(2);
    head->right->left = newNode(92);

    cout << isSumProperty(head);

    return 0;
}
