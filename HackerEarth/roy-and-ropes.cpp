//
// Created by a on 26/3/16.
//


#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
    cin>>t;
    while(t--)
    {int n;
        cin>>n;
        int a[n];
        int b[n];
        int kf=0,k=0;
        for(int i=0;i<n-1;i++)
        {cin>>a[i];
            if(a[i]==0)
                kf++;

        }
        for(int i=0;i<n-1;i++)
        {	cin>>b[i];
            if(b[i]==0)
                k++;
        }
        int max2 =-1,max1=-1;
        for(int i=0;i<n-1;i++)
        {a[i] = a[i]+i+1;
            if(a[i]>max2)
                max2 = a[i];
        }

        for(int i=0;i<n-1;i++)
        {b[i] = b[i]+i+1;
            if(b[i]>max1)
                max1 = b[i];
        }
        max2 = max(max2,max1);

        if(k==kf&&k==n-1)
            cout<<n<<endl;
        else
            cout<<max2<<endl;
    }
    return 0;
}
