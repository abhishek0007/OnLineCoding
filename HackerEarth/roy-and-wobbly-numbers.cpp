//
// Created by a on 26/3/16.
//

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int a,b;
        cin>>n>>k;
        if(k>81)
            cout<<-1<<endl;
        else
        {
            if(k==81)
            {
                a=9;
                b=8;
                for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                        cout<<a;
                    else
                        cout<<b;
                }
                cout<<endl;

            }
            else	if(k%9==0)
            {
                a = k/9;
                if(a<9)
                    b =9;
                for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                        cout<<a;
                    else
                        cout<<b;
                }
                cout<<endl;

            }else
            {
                a = 1+ (k/9);
                b = k%9;
                if(b<=a)
                    b = b-1;
                for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                        cout<<a;
                    else
                        cout<<b;
                }
                cout<<endl;
            }
        }


    }
    return 0;
}
