#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int c[1000];
        for (int i = 0; i <= 1000; i++)
            c[i] = 0;

        int p;
        for (int i = 0; i < n; i++) {
            cin >> p;
            c[p]++;
        }

        for (int i = 0; i < m; i++) {
            cin >> p;
            c[p]++;
        }
        //for(int i=0;i<=1000;i++)
        //   cout<<i<<" "<<c[i]<<endl;
//	  cout<<endl;
        int k = 0;
        for (int i = 0; i <= 1000; i++)
            if (c[i] == 2) {
                k = 1;
                cout << i << " ";
            }
        if (k == 0)
            cout << 0;

        cout << endl;

    }
    return 0;
}
