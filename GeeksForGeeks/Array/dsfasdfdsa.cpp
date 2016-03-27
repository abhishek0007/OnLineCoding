#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

class segTree {
    // O(n)
    int *array, *tree;
    int arrayLen, treeLen;

    // O(n)
    void initialize(int node, int b, int e) {
        if (b == e)
            tree[node] = b;
        else {
            // recurse
            initialize(2 * node, b, (b + e) / 2);
            initialize(2 * node + 1, (b + e) / 2 + 1, e);
            // update value
            if (array[tree[2 * node]] <= array[tree[2 * node + 1]])
                tree[node] = tree[2 * node];
            else
                tree[node] = tree[2 * node + 1];
        }
    }

public:
    segTree(int *array, int arrayLen) {
        this->arrayLen = arrayLen;
        this->array = array;
        this->treeLen = 2 << (int) ceil(log2(arrayLen));
        cout << "treeLen=" << treeLen << endl;
        this->tree = new int[treeLen];
        memset(tree, -1, sizeof(int) * treeLen);
        initialize(1, 0, arrayLen - 1);
    }

    // O(log n)
    void update(int i, int v, int node = 1, int b = 0, int e = 0) {
        e = arrayLen - 1 - e;
        if (b == e) {
            array[i] = v;
        } else {
            int mid = (b + e) / 2;
            if (i <= mid)
                update(i, v, 2 * node, b, arrayLen - 1 - mid);
            else
                update(i, v, 2 * node + 1, mid + 1, arrayLen - 1 - e);
            if (array[tree[2 * node]] <= array[tree[2 * node + 1]])
                tree[node] = tree[2 * node];
            else
                tree[node] = tree[2 * node + 1];
        }
    }

    // O(log n)
    int query(int i, int j, int node = 1, int b = 0, int e = 0) {
        e = arrayLen - 1 - e;
        // bad interval
        if (i > e || j < b)
            return 0;
        // good interval
        if (b >= i && e <= j)
            return tree[node];
        // partial interval
        int left = query(i, j, 2 * node, b, arrayLen - 1 - (b + e) / 2);
        int right = query(i, j, 2 * node + 1, (b + e) / 2 + 1, arrayLen - 1 - e);
        if (left == -1)
            return tree[node] = right;
        if (right == -1)
            return tree[node] = left;
        if (array[left] <= array[right])
            return tree[node] = left;
        return tree[node] = right;
    }
};

/*
int main() {
   int A[10] = { 2, 4, 3, 1, 6, 7, 8, 9, 1, 7 };
   segTree t(A, 10);
   cout << "getMin(0, 4) = " << t.query(0, 4) << endl;
   t.update(1, 0);
   cout << "getMin(0, 4) = " << t.query(0, 4) << endl;
   t.update(0, -1);
   cout << "getMin(0, 4) = " << t.query(0, 4) << endl;
   return 0;
}
*/
int main() {
    int arr[] = {3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Build segment tree from given array
//    int *st = constructST(arr, n);
    segTree t(arr, n);


    long long int a, b, c, d;
    long long int ans = 0;
    for (a = 0; a < n; a++) {
        for (b = a - 1; b < n; b++) {
            for (c = b; c < n; c++) {
                for (d = c - 1; d < n; d++) {
                    ans = ans + min(t.query(a, b), t.query(c, d));


                }
            }
        }
    }

    cout << ans / 2 << endl;

    return 0;
}
