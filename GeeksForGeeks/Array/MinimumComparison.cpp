#include<bits/stdc++.h>

using namespace std;

int right(int a[], int n, int x) {
    int l = 0;
    int r = n - 1;
    int mid;
    while (l <= r) {
        mid = ((r - l) / 2) + l;
        if (a[mid] == x && x < a[mid + 1])
            return mid;
        else if (x <= a[mid])
            r = mid - 1;
        else l = mid + 1;

    }

    return 0;
}

int left(int a[], int n, int x) {

    int l = 0;
    int r = n - 1;
    int mid;
    while (l <= r) {
        mid = ((r - l) / 2) + l;
        if (a[mid] == x && a[mid - 1] < x)
            return mid;
        else if (x <= a[mid])
            r = mid - 1;
        else l = mid + 1;

    }

}

void isMajority(int a[], int n, int x) {
    int c = right(a, n, x) - left(a, n, x) + 1;
    cout << left(a, n, x) << " " << right(a, n, x) << endl;
    cout << c;

}

int main() {

    int a[] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 5, 6, 7, 8, 8, 8, 8, 9, 9, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 2;
    isMajority(a, n, x);


    return 0;


}
