#include<bits/stdc++.h>

using namespace std;

int minJumps(int a[], int n) {
    int jump[n];
    jump[0] = 0;
    for (int i = 1; i < n; i++) {
        jump[i] = INT_MAX;
        for (int j = 0; j < i; j++) {
            if (i <= j + a[j] && jump[j] != INT_MAX)
                jump[i] = min(jump[i], jump[j] + 1);
            break;

        }

    }
    return jump[n - 1];
}

int minJumpsUpdated(int arr[], int n) {
    int jumps[n];
    int i = 1, j = 0;
    jumps[0] = 0;
    for (i = 1; i < n;) {
        if (arr[j] + j < i && j < i)
            j++;
        else if (arr[j] + j >= i && j < i)
            jumps[i++] = jumps[j] + 1;
        else {
            printf("solution does not exist");
            return -1;
        }
    }
    /*
      printf("jumps: ");
      for (i = 0; i < n; i++) {
        printf("%d, ", jumps[i]);
      }
      */
    return jumps[n - 1];
}

int JumpMinimum(int a[], int n) {
    //int jump[n];
    int l = a[0];
    int s = a[0];
    int jump = 1;
    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            return jump;
        if (i + a[i] > l)
            l = i + a[i];
        s--;
        if (s == 0) {

            jump++;
            s = l - i;
        }


    }
    return jump;
}

int main() {
    int arr[] = {1, 4, 3, 7, 1, 2, 6, 7, 6, 10};
    int size = sizeof(arr) / sizeof(int);
//  cout<<minJumps(arr,size);
//   cout<<minJumpsUpdated(arr,size);
    cout << JumpMinimum(arr, size);
    return 0;


}
