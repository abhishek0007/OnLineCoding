#include<bits/stdc++.h>

using namespace std;

int FindMaxSum(int a[], int n) {
    int ind1, ex = 0, inc = a[0];
    for (int i = 1; i < n; i++) {
        ind1 = inc;
        inc = max(inc, ex + a[i]);
        ex = ind1;
        cout << ind1 << " " << inc << " " << ex << endl;


    }
    return max(ex, inc);
}

int main() {
    int arr[] = {5, 5, 10, 100, 10, 5};
    printf("%d \n", FindMaxSum(arr, 6));
    getchar();
    return 0;
}
