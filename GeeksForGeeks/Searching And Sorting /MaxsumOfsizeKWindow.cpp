#include<iostream>

using namespace std;

int sumOFwindowK(int a[], int n, int k) {
    int sum = 0, newSUM, max = -1;
    for (int i = 0; i < k; i++)
        sum += a[i];
    for (int i = 0; i < n - k + 1; i++) {
        if (max < newSUM)
            max = sum;

        newSUM = sum - a[i] + a[i + k];
        if (newSUM > max)
            max = newSUM;
        sum = newSUM;

    }
    return max;
}

int main() {
    int a[] = {11, -8, 16, -7, 24, -2, 3};
    int n = 7;
    int k = 3;
    cout << sumOFwindowK(a, n, k);


}
