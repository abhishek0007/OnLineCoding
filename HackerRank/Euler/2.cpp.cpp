//
// Created by a on 28/3/16.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long int n, a = 1, c, b = 2, sun = 2;
    cin >> t;
    while (t--) {
        cin >> n;
        // a=1,b=2;
        sun = 2;
        while (1) {
            c = a + b;

            //   cout<<c<<" ";
            if (c >= n) {
                a = 1;
                b = 2;

                break;
            }
            else {
                if (c % 2 == 0)
                    sun += c;
                a = b;
                b = c;
            }


        }
        cout << sun << endl;

    }

    return 0;
}
