#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int i = 1, k = 0, c = 0;
        while (i < s.length() - 2) {
            k = 0;
            int j = i;
            while (j < i + 1) {
                if (s[j - 1] != s[j])
                    k = 1;
                j++;
            }
            if (k == 1) {
                c++;
                //  cout<<"i "<<i<<"j "<<j<<endl;
                if (j + 2 < s.length() - 2)
                    i = j + 2;
                //  cout<<"Now i is"<<i<<endl;
                //  cout<<"---------------"<<endl;
            }
            else
                i++;// = i+1;
        }
        cout << s.length() - c * 3 << endl;
    }
//    cout << "Hello World!" << endl;
    return 0;
}
