#include<bits/stdc++.h>

#define N 4
#define M 6
using namespace std;

bool isvalid(char a[N][M], string str, int i, int j, int index) {
    if (a[i][j] == str[index] && i >= 0 && i < N && j >= 0 && j < M)
        return true;
    else return false;
}

bool Backtrackutil(char a[N][M], string str, int i, int j, int l, int index) {
    if (index == l - 1)
        return true;

    if (isvalid(a, str, i + 1, j + 1, index + 1) && Backtrackutil(a, str, i + 1, j + 1, l, index + 1))
        return true;

    if (isvalid(a, str, i + 1, j, index + 1) && Backtrackutil(a, str, i + 1, j, l, index + 1))
        return true;
    if (isvalid(a, str, i + 1, j - 1, index + 1) && Backtrackutil(a, str, i + 1, j - 1, l, index + 1))
        return true;

    if (isvalid(a, str, i, j + 1, index + 1) && Backtrackutil(a, str, i, j + 1, l, index + 1))
        return true;
    if (isvalid(a, str, i, j - 1, index + 1) && Backtrackutil(a, str, i, j - 1, l, index + 1))
        return true;

    if (isvalid(a, str, i - 1, j + 1, index + 1) && Backtrackutil(a, str, i - 1, j + 1, l, index + 1))
        return true;
    if (isvalid(a, str, i - 1, j - 1, index + 1) && Backtrackutil(a, str, i - 1, j - 1, l, index + 1))
        return true;

    if (isvalid(a, str, i - 1, j, index + 1) && Backtrackutil(a, str, i - 1, j, l, index + 1))
        return true;

    return false;


}

void Backtrack(char a[N][M], string str) {
    int l = str.length();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            if (a[i][j] == str[0]) if (Backtrackutil(a, str, i, j, l, 0))
                cout << i << " " << j << endl;
    }
}

int main() {
    char a[N][M] =
            {
                    {'s', 'd', 'h', 'f', 'a', 'k'},
                    {'s', 'k', 'h', 'e', 's', 'r'},
                    {'b', 's', 'i', 'h', 'k', 's'},
                    {'a', 'h', 'e', 'k', 'f', 'g'}};


    string str = "abhishek";
    Backtrack(a, str);
    return 0;
}
