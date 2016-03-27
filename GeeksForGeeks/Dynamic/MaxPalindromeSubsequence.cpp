/* Dynamic Programming C/C++ implementation of LCS problem */
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(char *X, char *Y, int m, int n) {
    int L[m + 1][n + 1];
    int i, j;

    /* Following steps build L[m+1][n+1] in bottom up fashion. Note
       that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
    return L[m][n];
}


int max(int a, int b) {
    return (a > b) ? a : b;
}

/* Driver program to test above function */
int LPS(string s) {
    int n = s.length();
    int palindrome[n][n]; //Table to store lengths of palindrome subsequences.
    //Trivial case: single letter palindromes

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            palindrome[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        palindrome[i][i] = 1;
    }

    for (int kkkk = 0; kkkk < n; kkkk++) {
        for (int kkp = 0; kkp < n; kkp++) {
            cout << palindrome[kkkk][kkp] << " ";
        }
        cout << endl;

    }

    cout << endl << endl;
    //Finding palindromes of length 2 to n and saving the longest
    for (int curr_len = 2; curr_len <= n; curr_len++) {
        for (int i = 0; i < n - curr_len + 1; i++) {
            int j = i + curr_len - 1;
            if (s[i] == s[j])//Trim if match and add 2
            {
                palindrome[i][j] = palindrome[i + 1][j - 1] + 2;
            }
            else //Trim one at a time and take max
            {
                palindrome[i][j] = max(palindrome[i + 1][j], palindrome[i][j - 1]);
            }
        }

        for (int kkkk = 0; kkkk < n; kkkk++) {
            for (int kkp = 0; kkp < n; kkp++) {
                cout << palindrome[kkkk][kkp] << " ";
            }
            cout << endl;

        }

        cout << endl << endl;
    }
    return palindrome[0][n - 1];
}


int main() {
//  char X[] = "ACECCBA";
    //char Y[] = "ABCCECA";
    string X = "ACECC";
    // int m = strlen(X);
    //int n = strlen(Y);

//  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );
    cout << LPS(X);
    return 0;
}
