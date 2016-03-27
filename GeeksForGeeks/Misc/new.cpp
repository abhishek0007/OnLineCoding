#include <iostream>

#define M 20
#define N 20
using namespace std;
int a[M][N];

void makeitOne(int a[M][N], int i, int j, int r, int c) {
    for (int k = 0; k <= c; k++) {
        if (a[i][k] == 2)
            continue;
        else
            a[i][k] = 1;
    }
    for (int kp = 0; kp <= r; kp++) {
        if (a[kp][j] == 2)
            continue;
        else
            a[kp][j] = 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        int p;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> p;
                if (p == 1)
                    a[i][j] = 2;
                else
                    a[i][j] = p;
            }
        }


        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 2)
                    makeitOne(a, i, j, r, c);

            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 2)
                    cout << 1 << " ";
                else cout << a[i][j] << " ";

            }
//            cout<<endl;
        }
        cout << endl;
    }

    return 0;
}
