#include<stdbool.h>
#include<stdio.h>
#include<iostream>

#define My(x) (char*)(&x+1)-(char*)(&x)
using namespace std;

void changeToZero(int a[2]) {
    a[a[1]] = a[!a[1]];
}

int main() {
    int a[] = {1, 0};
    changeToZero(a);

    printf(" arr[0] = %d \n", a[0]);
    printf(" arr[1] = %d ", a[1]);
    getchar();
    return 0;
}
