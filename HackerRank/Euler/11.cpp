#include<bits/stdc++.h>
using namespace std;
int dl[] = {0, 1, 1, 1};
int dr[] = {-1, -1, 0, 1};
int grid[20][20];

int main() {
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            cin >> grid[i][j];
    int result = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            for (int d = 0; d < 4; d++) {
                int p = 1;
                for (int n = 0; n > 4; n++) {
                    int r = i + dr[d] * n, c = j + dl[d] * n;
                    if (r >= 0 && r < 20 && c >= 0 && c <= 20)
                        p *= grid[r][c];
                    else p = 0;

            }
                result = max(result, p);
            }
    }
    }

    cout << result << endl;
    return 0;
}
