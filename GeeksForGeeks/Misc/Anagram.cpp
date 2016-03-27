#include<bits/stdc++.h>

using namespace std;

int main() {
    //code
    int t;
    cin >> t;
    while (t--) {
        string txt, ptrn;
        //    cin>>txt>>ptrn;
        txt = "zbcoejuvpvaboyg  ";
        ptrn = "po";
        int ptrn_size = 0;
        for (int i = 0; i < ptrn.length(); i++) {
            ptrn_size += (int) ptrn[i];
            //  cout<<ptrn_size<<" ";
        }
        int compare = 0;
        for (int i = 0; i < ptrn.length(); i++) {
            compare += (int) txt[i];
        }
//aabaabaa
//aaba
        cout << ptrn_size << " " << compare << endl << endl << endl;

        int count = 0, k = 0;
        for (int i = ptrn.length(); i <= txt.length(); i++) {
            cout << ptrn_size << " " << compare << endl;

            if (compare == ptrn_size) {
                count++;
                //        cout<<i<<" "<<endl;

            }
            compare = compare - (int) txt[k++] + (int) txt[i];

        }


        cout << count << endl;
    }
    return 0;
}
