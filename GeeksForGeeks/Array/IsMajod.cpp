#include<bits/stdc++.h>

using namespace std;

int right(int a[], int n, int x) {
    int l = 0;
    int r = n - 1;
    int mid;
    while (l <= r) {
        mid = ((r - l) / 2) + l;
        // mid = l +((r-l)/(a[r]-a[l]))*(x-a[l]);
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
        // mid = l +((r-l)/(a[r]-a[l]))*(x-a[l]);
        if (a[mid] == x && a[mid - 1] < x)
            return mid;
        else if (x <= a[mid])
            r = mid - 1;
        else l = mid + 1;

    }

}

bool isMajority(int a[], int n, int x) {
    int c = right(a, n, x) - left(a, n, x);
    if (c >= n / 2)
        return true;
    else
        false;


}

int main() {
    std::clock_t start;
    double duration;

    start = std::clock();

    int a[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 5, 6, 7, 8, 8, 8, 8, 9, 9, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 2;
    cout << isMajority(a, n, x);
    duration = 10000 * (std::clock() - start) / (double) CLOCKS_PER_SEC;

    std::cout << "printf: " << duration << '\n';

    return 0;


}
