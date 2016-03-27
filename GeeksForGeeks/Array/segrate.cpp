#include<bits/stdc++.h>

using namespace std;

void segregate0and1(int a[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (a[i] == 0)
            i++;
        if (a[j] == 1)
            j--;
        if (a[i] == 1 && a[j] == 0) {
            swap(a[i], a[j]);
            i++;
            j--;
        }

    }


}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 1};
    int i, arr_size = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, arr_size);

    printf("array after segregation ");
    for (i = 0; i < 6; i++)
        printf("%d ", arr[i]);


    return 0;
}
