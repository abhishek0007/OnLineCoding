#include<bits/stdc++.h>

using namespace std;

int right(int a[], int n, int x) {
    int left = 0;
    int rigt = n - 1;
    int mid;
    while (left <= rigt) {
        mid = ((rigt + left) / 2);//+left;
        if (a[mid] == x && x < a[mid + 1])
            return mid;
        else if (a[mid] <= x)
            left = mid + 1;

        else rigt = mid - 1;

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
        else if (a[mid] >= x)
            r = mid - 1;
        else l = mid + 1;


    }
    return 0;
}

bool isMajority(int a[], int n, int x) {
    int c = right(a, n, x) - left(a, n, x);
    //int c = left(a,n,x);

    if (c >= n / 2)
        return true;
    else return false;

}

int main() {
//int arr[] ={1, 2, 3, 4, 4, 4, 4};
    int arr[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    cout << isMajority(arr, n, x);


    return 0;
}
