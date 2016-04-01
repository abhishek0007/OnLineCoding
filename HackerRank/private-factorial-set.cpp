//
// Created by a on 1/4/16.
//

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

ll factorialLength(ll n) {
    ll count = 0;
    while (n % 2 == 0) {
        n = n / 2;
        count++;
    }

    for (ll i = 3; i <= sqrt(n); i = i + 2) {

        while (n % i == 0) {
            count++;
            n = n / i;
        }
    }


    if (n > 2)
        count++;
    return count;
}

ll fact[1000000];

ll factor(ll n) {
    if (n == 0 || n == 1)
        fact[n] = 1;
    fact[n] = n * factor(n - 1);
    return fact[n];
}

int main() {
    ll n;

    ll i = factor(10000000);
    ll b[10000000];

    for (ll i = 1; i <= 1000000; i++)
        b[i] = factorialLength(fact[i]);

    //   cin>>n;
    ll a[n];
    //for(ll i=0;i<n;i++)
    //    cin>>a[i];


    for (ll i = 0; i < 7; i++)
        cout << b[i] << " ";
    cout << endl << "---------------" << endl;
    ll sumeven = 0;
    ll sumodd = 0;
    ll neg = -1;
    ll c = 0;
    /*   for(ll i=0;i<n;i++)
       {       if(b[i]%2==0)
              sumeven+=b[i];
              if(b[i]%2!=0){
                  c++;
                neg = max(neg,b[i]);
                  sumodd+=b[i];
              }

       }
       if(c%2==0)
        {
           cout<<sumeven+sumodd<<endl;
       }
       else
            cout<<sumeven+sumodd-neg<<endl;
       */

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
