#include<bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head = NULL;

void print(Node *head) {
    int a[100];
    while (head != NULL) {
        a[head->data] = 1;
        head = head->next;
    }


}

int main() {
    Node *first = (Node *) malloc(sizeof(Node));
    Node *second = (Node *) malloc(sizeof(Node));
    Node *third = (Node *) malloc(sizeof(Node));
    Node *third1 = (Node *) malloc(sizeof(Node));
    Node *third2 = (Node *) malloc(sizeof(Node));
    Node *third3 = (Node *) malloc(sizeof(Node));
    Node *third4 = (Node *) malloc(sizeof(Node));
    first->data = 5;
    first->next = second;
    second->data = 6;
    second->next = third;
    third->data = 8;
    third->next = third1;

    third1->data = 6;
    third1->next = third2;

    third2->data = 9;
    third2->next = third3;

    third3->data = 7;
    third3->next = third4;

    third4->data = 5;
    third4->next = NULL;


    head = first;
    print(head);

    return 0;
}
