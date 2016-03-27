#include<bits/stdc++.h>

using namespace std;
/*
int ksmallest(int a[],int n,int k) //O(nd)
{
    int kk;
    int min;
for(int i=0;i<k;i++)
{
     min = 888;
    for(int j=0;j<n;j++)
    {
        if(min>a[j])
        {
            min = a[j];
            kk =j;
        }

    }
    a[kk] = 99999;

}
return min;
}

*/

/*int ksmallest(int a[],int n,int k) //O(nlog(n))
{
sort(a,a+n);
return a[k-1];
}
*/
void ksmallest(int a[], int n, int k) {
    make_heap(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    int p = n;
    for (int i = 0; i < p - k; i++) {
        pop_heap(a, a + n);
        n = n - 1;
    }
    cout << a[0] << " ";


}

int main() {
    int a[] = {1, 23, 12, 9, 30, 2, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    ksmallest(a, n, k);
    return 0;
}
