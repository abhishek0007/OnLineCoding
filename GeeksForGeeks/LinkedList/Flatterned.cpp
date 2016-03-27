#include<bits/stdc++.h>

using namespace std;
typedef struct Node {
    int data;
    struct Node *right;
    struct Node *down;
} Node;


void push(Node **head_ref, int new_data) {
    /* allocate node */
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->right = NULL;

    /* put in the data  */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->down = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}


int main() {
    Node *root = NULL;

    /* Let us create the following linked list
       5 -> 10 -> 19 -> 28
       |    |     |     |
       V    V     V     V
       7    20    22    35
       |          |     |
       V          V     V
       8          50    40
       |                |
       V                V
       30               45
    */
    push(&root, 30);
    push(&root, 8);
    push(&root, 7);
    push(&root, 5);

    push(&(root->right), 20);
    push(&(root->right), 10);

    push(&(root->right->right), 50);
    push(&(root->right->right), 22);
    push(&(root->right->right), 19);

    push(&(root->right->right->right), 45);
    push(&(root->right->right->right), 40);
    push(&(root->right->right->right), 35);
    push(&(root->right->right->right), 20);

    root = flap(root);


    return 0;
}
