#include<bits/stdc++.h>

using namespace std;

int main() {

    string str2[] = {"abhishek", "here", "is", "here", "kumar", "singh", "is", "here", "tell", "me", "any", "thing"};
    string str1[] = {"here", "is"};

    map<string, int> m;

    for (int i = 0; i < 12; i++) {
        m[str2[i]]++;
    }

    for (int i = 0; i < 2; i++) {
        cout << str1[i] << " " << m[str1[i]] << endl;
    }

/*
    int i,j;
    for(  j=0; j<2; j++)
    {
        int count=0;
        for( i=0; i<12; i++)
        {
            if(str1[j]==str2[i])
                count++;
        }
        cout<<str1[j] <<" " <<count<<endl;
    }

    */

    return 0;
}
