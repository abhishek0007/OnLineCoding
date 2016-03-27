#include<bits/stdc++.h>

#define N 9
using namespace std;
const int inf = 1 << 30;

// given adjacency matrix adj, finds shortest path from A to B
int dijk(int A, int B, int adj[N][N]) {
    int n = N;//adj.size();
    int dist[n];
    bool vis[n];

    for (int i = 0; i < n; ++i) {
        dist[i] = inf;
    }
    dist[A] = 0;

    for (int i = 0; i < n; ++i) {
        int cur = -1;
        for (int j = 0; j < n; ++j) {
            if (vis[j]) continue;
            if (cur == -1 || dist[j] < dist[cur]) {
                cur = j;
            }
        }

        vis[cur] = true;
        for (int j = 0; j < n; ++j) {
            int path = dist[cur] + adj[cur][j];
            if (path < dist[j]) {
                dist[j] = path;
            }
        }
    }

    return dist[B];
}


int main() {
    int a[N][N] = {{0, 4,  0, 0,  0,  0,  0, 8,  0},
                   {4, 0,  8, 0,  0,  0,  0, 11, 0},
                   {0, 8,  0, 7,  0,  4,  0, 0,  2},
                   {0, 0,  7, 0,  9,  14, 0, 0,  0},
                   {0, 0,  0, 9,  0,  10, 0, 0,  0},
                   {0, 0,  4, 0,  10, 0,  2, 0,  0},
                   {0, 0,  0, 14, 0,  2,  0, 1,  6},
                   {8, 11, 0, 0,  0,  0,  1, 0,  7},
                   {0, 0,  2, 0,  0,  0,  6, 7,  0}
    };

    cout << dijk(1, 3, a);


    return 0;
}
