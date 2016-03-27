#include<bits/stdc++.h>

#define ll long long int

ll min(ll a, ll b) {
    if (a <= b)
        return a;
    else return b;

}

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll B, W, x, y, z, new1 = 0, new2 = 0, new3 = 0, equal = 0;
        cin >> B >> W >> x >> y >> z;

        if (x < y) {
            new1 = (B + W) * x;
        }
        else if (x > y) {
            new1 = (B + W) * y;
        }
        else if (x == y) {
            new2 = (B + W) * x;
            equal = 1;
        }

        if (equal) {
            new2 = new2;
        }
        else if (z <= x && z <= y) {
            if (x < y)
                new1 += z * W;
            else if (x > y)
                new1 += z * B;

        }

        else if (z >= x && z <= y) {
            new1 += W * z;

        }
        else if (z >= y && z <= x) {

            new1 += B * z;
        }

        //{
        new3 = B * x + W * y;
        // }

        cout << min(new2, min(new3, new1)) << endl;

    }


    return 0;
}
