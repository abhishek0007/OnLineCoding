#include<bits/stdc++.h>

#define N 6
using namespace std;
int reach[N] = {0};

void DFS(int a[N][N], int v) {
    int i;
    reach[v] = 1;
    for (i = 1; i < N; i++)
        if (a[v][i] && !reach[i]) {
            printf("\n %d->%d", v, i);
            DFS(a, i);
        }
}

void BFS(int a[N][N]) {
    queue<int> q;
    bool visited[N];
    for (int i = 0; i < N; i++)
        visited[i] = false;
    int source = 0;
    q.push(0);
    while (!q.empty()) {
        int temp = q.front();
        cout << temp << " ";
        for (int i = 0; i < N; i++)
            if (!visited[i] && a[temp][i])
                q.push(i);

        visited[temp] = true;


        q.pop();

    }

}

int main() {
    int g[N][N] =
            {
                    {0, 1, 1, 0, 0, 1},
                    {1, 0, 1, 1, 0, 0},
                    {1, 1, 0, 1, 1, 1},
                    {0, 1, 1, 0, 1, 0},
                    {0, 0, 1, 1, 0, 1},
                    {1, 0, 1, 0, 1, 0}
            };
    DFS(g, 0);
//BFS(g);

    return 0;
}
