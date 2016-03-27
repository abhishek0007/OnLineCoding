#include<iostream>

#define Mysize(X) ((char*)(&X+1)-(char*)(&X))

#include<algorithm>

using namespace std;

int main() {
    int a[] = {1, 3, 2, 77, 1, 2, 77};
    int n = Mysize(a) / Mysize(a[0]);
    sort(a, a + n);
    int temp = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i - 1] != a[i]) {
            flag++;
        }
        else {
            temp = a[i];
        }

    }


    return 0;
}
