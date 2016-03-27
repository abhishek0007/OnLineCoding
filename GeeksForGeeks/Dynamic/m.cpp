#include<iostream>

using namespace std;

int main() {
    int arr[] = {12, 1, 12, 12};//, 1, 1, 2, 3, 2, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, res = 0;

    //int x;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        x = (1 << i);
        cout << x << " ";
        for (int m = 0; m < n; m++) {

            if (arr[i] & x)
                sum++;
        }
        if (sum % 3)
            res != sum;

    }


    return 0;
}
