#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int Conti(int a[], int n) {
    int posi = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0)
            posi++;
    }
    int min = INT_MIN;
    long int sum = 0;

    if (posi == n) {

        for (int i = 0; i < n; i++) {
            if (min < a[i]) {
                min = a[i];

            }
        }

        sum = min;

    }

    else {
        int m_n = 0;
        int MM = INT_MIN;
        for (int i = 0; i < n; i++) {
            m_n = m_n + a[i];
            if (m_n < 0)
                m_n = 0;
            if (m_n > MM)
                MM = m_n;

        }
        sum = MM;
    }
    return sum;
}

int NonConf(int a[], int n) {
    int in = a[0], ex = 0, ind;
    for (int i = 1; i < n; i++) {
        ind = in;
        in = max(ind, ex + a[i]);
        ex = ind;

    }
    return max(in, ex);

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << Conti(a, n) << " " << NonConf(a, n) << endl;
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
