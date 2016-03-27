#include <stdio.h>
#include <math.h>
#include <limits.h>
#include<bits/stdc++.h>

#define mod 1000000007
#define m 20000
static long long int fact[m][m];

using namespace std;

// A utility function to get minimum of two numbers
long long int minVal(long long int x, long long int y) {
    return (x < y) ? x : y;
}

// A utility function to get the middle index from corner indexes.
long long int getMid(long long int s, long long int e) {
    return s + (e - s) / 2;
}

/*  A recursive function to get the minimum value in a given range
     of array indexes. The following are parameters for this function.

    st    --> Polong long int er to segment tree
    index --> Index of current node in the segment tree. Initially
              0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented
                  by current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
long long int RMQUtil(long long int *st, long long int ss, long long int se, long long int qs, long long int qe,
                      long long int index) {
    // If segment of this node is a part of given range, then return
    //  the min of the segment
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return INT_MAX;

    // If a part of this segment overlaps with the given range
    long long int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2 * index + 1),
                  RMQUtil(st, mid + 1, se, qs, qe, 2 * index + 2));
}

// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
long long int RMQ(long long int *st, long long int n, long long int qs, long long int qe) {
    // Check for erroneous input values
    if (qs < 0 || qe > n - 1 || qs > qe) {
        // prlong long int f("Invalid Input");
        return 0;
    }

    return RMQUtil(st, 0, n - 1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
long long int constructSTUtil(long long int arr[], long long int ss, long long int se, long long int *st,
                              long long int si) {
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se) {
        st[si] = arr[ss];
        return arr[ss];
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    long long int mid = getMid(ss, se);
    st[si] = minVal(constructSTUtil(arr, ss, mid, st, si * 2 + 1),
                    constructSTUtil(arr, mid + 1, se, st, si * 2 + 2));
    return st[si];
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
long long int *constructST(long long int arr[], long long int n) {
    // Allocate memory for segment tree

    //Height of segment tree
    long long int x = (long long int) (ceil(log2(n)));

    // Maximum size of segment tree
    long long int max_size = 2 * (long long int) pow(2, x) - 1;

    long long int *st = new long long int[max_size];

    // Fill the allocated memory st
    constructSTUtil(arr, 0, n - 1, st, 0);

    // Return the constructed segment tree
    return st;
}

// Driver program to test above functions
int main() {
    long long int n;
    cin >> n;
    long long int arr[n];

    for (long long int i = 0; i < n; i++)
        cin >> arr[i];
    long long int ans = 0;

    // Build segment tree from given array
    long long int *st = constructST(arr, n);
    long long int qs = 1;
    long long int qe = 2;

    long long int a, b, c, d;
    long long kk = 0, kkq = 0;
    for (a = 0; a < n - 1; a++)
        for (b = a; b < n; b++) {
            if (b < a)
                break;
            if (a == b) {
                fact[a][b] = arr[a];//[b];
                kk = arr[a];
            }
            else if (fact[a][b] != 0)
                kk = fact[a][b];
            else if (fact[a][b] == 0)
                kk = RMQ(st, n, a, b);


            if (a + 1 == b + 1) {
                fact[a + 1][b + 1] = arr[a + 1];//[b];
                kkq = arr[a + 1];
            }
            else if (fact[a + 1][b + 1] != 0)
                kkq = fact[a + 1][b + 1];
            else if (fact[a + 1][b + 1] == 0) {
                kkq = RMQ(st, n, a + 1, b + 1);
                fact[a + 1][b + 1] = kkq;
            }

            ans = ans % mod + min(kk, kkq) % mod;

        }
//                ans = ans%mod + min(RMQ(st, n,a, b),RMQ(st, n,c, d))%mod;

    cout << ans;

    return 0;
}
