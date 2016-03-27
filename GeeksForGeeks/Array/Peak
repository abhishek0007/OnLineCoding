#include<bits/stdc++.h>

using namespace std;

void TotalPeakElement(int a[], int n) {
    int k = 0;
    for (int i = 1; i < n; i++)
        if (a[i - 1] < a[i])
            k++;
    if (k == n - 1)
        cout << a[n - 1] << endl;
    else if (k == 0)
        cout << a[0] << endl;
    else {
        for (int i = 1; i < n - 1; i++)
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
                cout << a[i] << " ";

    }


}

int Peak(int arr[], int n, int low, int high) {
    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return Peak(arr, low, (mid - 1), n);
    else return Peak(arr, (mid + 1), high, n);;

}

int main() {
    int a[] = {100, 80, 60, 50, 20};// {10, 20, 30, 40, 50};//{10, 20, 15, 2, 23, 90, 67};
    int n = sizeof(a) / sizeof(a[0]);
    TotalPeakElement(a, n);
    cout << endl << a[Peak(a, n, 0, n)];


    return 0;
}
