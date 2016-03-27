#include<iostream>

using namespace std;

int Majority(int a[], int n) {
    int count = 1, compare = a[0];
    for (int i = 1; i < n; i++) {
        if (compare != a[i])
            count--;
        else if (compare == a[i])
            count++;
        if (count < 0)
            compare = a[i];


    }

    if (count > 1)
        return compare;
    else return -1;

}

int main() {
    int a[] = {2, 6, 2, 2, 6, 2, 2, 8, 2, 1};
    int n = 10;
    cout << Majority(a, n);


}
