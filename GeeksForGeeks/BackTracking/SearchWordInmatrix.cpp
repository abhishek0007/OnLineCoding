#include<bits/stdc++.h>

#define N 5
#define M 6
using namespace std;

bool isSafe(int i, int j, int len, char a[N][N], char str[M]) {
    if (i >= 0 && i < N && j >= 0 && j <= N && a[i][j] == str[len])
        return true;
    else
        false;
}

bool CallBacktrack(char a[N][N], char str[M], int i, int j, int len) {
    if (len == M) {
        return true;
    }
    cout << a[i][j] << " " << endl;

    if (isSafe(i + 1, j, len++, a, str) && CallBacktrack(a, str, i + 1, j, len++))
        return true;

    if (isSafe(i + 1, j + 1, len++, a, str) && CallBacktrack(a, str, i + 1, j + 1, len++))
        return true;

    if (isSafe(i, j + 1, len++, a, str) && CallBacktrack(a, str, i, j + 1, len++))
        return true;

    if (isSafe(i - 1, j + 1, len++, a, str) && CallBacktrack(a, str, i - 1, j + 1, len++))
        return true;

    if (isSafe(i - 1, j, len++, a, str) && CallBacktrack(a, str, i - 1, j, len++))
        return true;

    if (isSafe(i - 1, j - 1, len++, a, str) && CallBacktrack(a, str, i - 1, j - 1, len++))
        return true;

    if (isSafe(i, j - 1, len++, a, str) && CallBacktrack(a, str, i, j - 1, len++))
        return true;

    if (isSafe(i + 1, j - 1, len++, a, str) && CallBacktrack(a, str, i + 1, j - 1, len++))
        return true;


    return false;


}

void Backtrack(char a[N][N], char str[M]) {
    int len = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i][j] == str[0]) if (CallBacktrack(a, str, i, j, len)) {
                cout << i << " " << j << endl;
            }

        }
    }
}

int main() {

    char a[N][N] = {{'t', 'z', 'x', 'c', 'd'},
                    {'a', 'h', 'n', 'z', 'x'},
                    {'h', 'w', 'o', 'i', 'o'},
                    {'o', 'r', 'n', 'r', 'n'},
                    {'a', 'b', 'r', 'i', 'n'}
    };

    char str[M] = {'h', 'o', 'r', 'i', 'o', 'n'};

    Backtrack(a, str);

    return 0;
}
