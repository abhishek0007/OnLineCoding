#include<iostream>

using namespace std;

int main() {
    int p[] = {2, 5, 7, 8};
    int a[10][10];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {

            if (i == 0 || j == 0)
                a[i][j] = 0;
            else if (i > j)
                a[i][j] = a[i - 1][j];
            else if (i <= j)
                a[i][j] = max(a[i - 1][j], max(a[i][j - 1], p[i - 1] + a[i][j - i]));

        }
    }


    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
