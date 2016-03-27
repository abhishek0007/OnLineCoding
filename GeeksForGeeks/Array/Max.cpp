#include<bits/stdc++.h>

using namespace std;

int Floor(int a[], int n, int key) {
    int l = 0;
    int r = n - 1;
    int mid;
    while (r <= l) {
        mid = l + (r - l) / 2;
        if (a[mid] <= key)
            l = mid;
        else r = mid;
    }

}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 13;
    cout << Floor(arr, n, x);
    //Ciel(arr,n,x);

    return 0;
}
