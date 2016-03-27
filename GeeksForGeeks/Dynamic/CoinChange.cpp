#include<bits/stdc++.h>

using namespace std;

int main() {
    int Coin[] = {1, 2, 3};
    int Money = 5;
    int a[14][10];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= Money; j++) {
            if (i == 0 || j == 0)
                a[i][j] = 0;

            else if (j < Coin[i - 1])
                a[i][j] = a[i - 1][j];
            else a[i][j] = a[i][j - i] + 1;
        }
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < Money + 1; j++) {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
