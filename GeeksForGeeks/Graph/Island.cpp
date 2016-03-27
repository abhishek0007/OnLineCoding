#include<bits/stdc++.h>

#define N 5
using namespace std;

int isSafe(int M[][N], int visited[][N], int i, int j) {
    // row number is in range, column number is in range and value is 1
    // and not yet visited
    return (i >= 0) && (i < N) &&
           (j >= 0) && (j < N) &&
           (M[i][j] && !visited[i][j]);
}

void DFSVisit(int a[N][N], int v[N][N], int ii, int ji) {
    int r[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int c[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    v[ii][ji] = 1;
    for (int i = 0; i < 8; i++)

        if (isSafe(a, v, ii + r[i], ji + c[i]))
            DFSVisit(a, v, ii + r[i], ji + c[i]);
}

int numberOfIsland(int a[N][N]) {

    int visited[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            visited[i][j] = 0;
        }
    }
    int c = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j] && a[i][j])
                DFSVisit(a, visited, i, j);
            c++;
        }
    }
    return c;
}

int main() {
    int a[N][N] = {{1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1},
                   {1, 0, 0, 1, 1},
                   {0, 0, 0, 0, 0},
                   {1, 0, 1, 0, 1}
    };

    cout << numberOfIsland(a);

    return 0;
}
