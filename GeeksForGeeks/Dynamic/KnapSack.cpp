#include<bits/stdc++.h>

#define Mysize(X) (((char*)(&X+1))-((char*)(&X)))
using namespace std;

int main() {
    int value[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int Knap = 50;
    int v = Mysize(value) / Mysize(value[0]);
    int w = Mysize(weight) / Mysize(weight[0]);

    int a[v + 1][Knap + 1];
    for (int i = 0; i <= v; i++) {
        for (int j = 0; j <= Knap; j++) {

            if (i == 0 || j == 0)
                a[i][j] = 0;
            else if (j < weight[i - 1])
                a[i][j] = a[i - 1][j];
            else a[i][j] = max(value[i - 1] + a[i - 1][j - weight[i - 1]], a[i - 1][j]);
        }
    }

    cout << a[v][Knap];

    return 0;
}
