#include<bits/stdc++.h>

using namespace std;

bool subArraySum(int a[], int n, int sum) {
    int index = a[0], k = 0;
    for (int i = 1; i < n; i++) {
        if (index < sum)
            index = index + a[i];
        if (index > sum)
            index = index - a[k++];

        if (index == sum)
            return true;

    }
    return false;


}

int main() {
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    cout << subArraySum(arr, n, sum);
    return 0;
}



