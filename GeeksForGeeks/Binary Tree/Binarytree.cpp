//Created by a on 17/3/16.

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

void Preorder(Node *temp) {
    if (temp) {
        Preorder(temp->left);
        Preorder(temp->right);
        cout << temp->data << " ";
    }
}

int maxElement(Node *temp) {
    queue<Node *> q;
    q.push(temp);
    Node *temp1;
    int min = -1;
    while (!q.empty()) {
        temp1 = q.front();
        if (temp1->data > min)
            min = temp1->data;
        if (temp1->left)
            q.push(temp1->left);
        if (temp1->right)
            q.push(temp1->right);
        q.pop();
    }
    return min;
}

int sizeRecursive(Node *temp) {
    if (!temp) return 0;
    int l = sizeRecursive(temp->left);
    int r = sizeRecursive(temp->right);
    return l + r + 1;
}

int sizeLevelOrder(Node *temp) {
    queue<Node *> q;
    q.push(temp);
    Node *temp1;
    int min = 0;
    while (!q.empty()) {
        temp1 = q.front();
        if (temp1)min++;
        if (temp1->left)
            q.push(temp1->left);
        if (temp1->right)
            q.push(temp1->right);
        q.pop();
    }
    return min;
}

void RevesreLevelOrder(Node *temp) {
    queue<Node *> q;
    stack<Node *> st;
    q.push(temp);
    Node *temp1;
    while (!q.empty()) {
        temp1 = q.front();
        st.push(temp1);
        if (temp1->right) q.push(temp1->right);
        if (temp1->left) q.push(temp1->left);
        q.pop();
    }
    while (!st.empty()) {
        cout << st.top()->data << " ";
        st.pop();
    }
}

int a[100] = {0}

int height(Node *temp) {
    if (temp == NULL)
        return -1;
    int l = height(temp->left) + 1;

    int r = height(temp->right) + 1;
    return max(l, r);
}

//int (Node* head,int *l)
int diaMeter(struct Node *root, int *height) {
    /* lh --> Height of left subtree
       rh --> Height of right subtree */
    int lh = 0, rh = 0;
    /* ldiameter  --> diameter of left subtree
       rdiameter  --> Diameter of right subtree */
    int ldiameter = 0, rdiameter = 0;
    if (root == NULL) {
        *height = 0;
        return 0; /* diameter is also 0 */
    }
    /* Get the heights of left and right subtrees in lh and rh
      And store the returned values in ldiameter and ldiameter */
    ldiameter = diaMeter(root->left, &lh);
    rdiameter = diaMeter(root->right, &rh);
    /* Height of current node is max of heights of left and
       right subtrees plus 1*/
    *height = max(lh, rh) + 1;
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}

int diameter(Node *tree, int *max1) {
    if (tree == NULL)
        return 0;
    int l = diameter(tree->left, max1);
    int r = diameter(tree->right, max1);
    if (l + r + 1 >= *max1)
        *max1 = l + r + 1;
    return max(l, r) + 1;
}

int MaxInAnylevel(Node *temp) {
    //  cout<<" ------------";
    queue<Node *> q;
    q.push(temp);
    q.push(NULL);
    Node *temp1;
    int sum = 0;
    int max = -2;

    //cout<<temp1->data<<" ";
    while (!q.empty()) {
        temp1 = q.front();
        q.pop();

        if (temp1 == NULL) {
            if (sum > max)
                max = sum;
            if (!q.empty())
                q.push(NULL);

            sum = 0;
        }
        else {
            sum += temp1->data;

            if (temp1->left) q.push(temp1->left);
            if (temp1->right) q.push(temp1->right);
        }
    }

    return max;
}

void printRootToLeaf(int a[], int i) {
    for (int ii = 0; ii < i; ii++)
        cout << a[i] << " ";
}

void rootUtil(Node *temp, int a[], int i) {
    if (temp == NULL) return;
    a[i] = temp->data;
    i++;
    if (temp->left == NULL && temp->right == NULL) {
        for (int k = 0; k < i; k++)
            cout << a[k] << " ";
        cout << endl;
    }
    else {
        rootUtil(temp->left, a, i);
        rootUtil(temp->right, a, i);
    }
}

void rootToLeaf(Node *head) {
    int a[100];
    rootUtil(head, a, 0);
}

//Node* (Node* temp)
//{
void ConvertToMirror(struct Node *node) {
    if (node == NULL)
        return;
    else {
        struct Node *temp;

        /* do the subtrees */
        ConvertToMirror(node->left);
        ConvertToMirror(node->right);

        /* swap the pointers in this node */
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

void inOrder(Node *temp) {
    if (temp) {
        cout << temp->data << " ";
        inOrder(temp->left);
        inOrder(temp->right);
    }
}

void verticalsum(Node *temp, int level) {

    if (temp == NULL) return;
    verticalsum(temp->left, level + 1);
    h[level] += temp->data;
    verticalsum(temp->right, level - 1);
}

void Dialgonalsum(Node *temp, int level) {
    if (temp == NULL) return;
    h[level] += temp->data;
    // cout<<level<<"  "<<temp->data<<" "<<h[level]<<endl;
    Dialgonalsum(temp->right, level + 1);
    Dialgonalsum(temp->left, level);
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
    Preorder(head);
    cout << endl << endl;
    cout << "Max Element is Tree " << " " << maxElement(head);
    cout << endl << endl;
    cout << "size of the tree " << sizeRecursive(head);
    cout << endl << endl;
    cout << "Level order traversal " << sizeLevelOrder(head);
    cout << endl << endl;
    cout << "Reverse order Print level order Print" << endl;
    RevesreLevelOrder(head);
    cout << endl << endl;
    cout << height(head);
    cout << endl << endl;
    cout << MaxInAnylevel(head);
    cout << endl << endl;
    rootToLeaf(head);
    cout << endl << endl;
    //Preorder(head);
    inOrder(head);
    ConvertToMirror(head);
    cout << endl << endl;
    inOrder(head);
    cout << endl << endl;
    /*    for(int i=-6; i<6; i++)
        {
            h[i]=0;
        }
        verticalsum(head,0);
        for(int i=-6; i<6; i++)
        {
            cout<<i<<" "<<h[i]<<endl;
        }
      */
    for (int i = -6; i < 6; i++) {
        h[i] = 0;
    }

    Dialgonalsum(head, 0);
    for (int i = 0; i < 6; i++) {
        cout << i << " " << h[i] << endl;
    }
    return 0;
}
