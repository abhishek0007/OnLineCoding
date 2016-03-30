//
// Created by a on 30/3/16.
//

#include<bits/stdc++.h>

using namespace std;
int grid[20][20];

int main() {
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            cin >> grid[i][j];

    long product = 1, result = 0;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            product = 1;
            //UP
            if (i - 1 >= 0 && i - 2 >= 0 && i - 3 >= 0 && i >= 0 && j < 20 && j >= 0 && i < 20) {
                product = grid[i][j] * grid[i - 1][j] * grid[i - 2][j] * grid[i - 3][j];
                result = max(product, result);
                product = 1;
            }
            if (j - 1 >= 0 && j - 2 >= 0 && j - 3 >= 0 && i >= 0 && j < 20 && j >= 0 && i < 20) {
                product = grid[i][j] * grid[i][j - 1] * grid[i][j - 2] * grid[i][j - 3];
                result = max(product, result);
                product = 1;
            }
            if (j + 1 < 20 && j + 2 < 20 && j + 3 < 20 && j < 20 && i >= 0 && j < 20 && j >= 0 && i < 20) {
                product = grid[i][j + 1] * grid[i][j] * grid[i][j + 2] * grid[i][j + 3];
                result = max(product, result);
                product = 1;
            }

            if (i + 1 < 20 && i + 2 < 20 && i + 3 < 20 && i < 20 && i >= 0 && j < 20 && j >= 0 && i < 20) {
                product = grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
                result = max(product, result);
            }

            if (i + 1 < 20 && i + 2 < 20 && i + 3 < 20 && j - 1 >= 0 && j - 2 >= 0 && j - 3 >= 0 && i >= 0 && j < 20 &&
                j >= 0 && i < 20) {
                product = grid[i][j] * grid[i + 1][j - 1] * grid[i + 2][j - 2] * grid[i + 3][j - 3];
                result = max(product, result);
            }
            if (i - 1 >= 0 && i - 2 >= 0 && i - 3 >= 0 && j + 1 < 20 && j + 2 < 20 && j + 3 < 20 && i >= 0 && j < 20 &&
                j >= 0 && i < 20) {
                product = grid[i][j] * grid[i - 1][j + 1] * grid[i - 2][j + 2] * grid[i - 3][j + 3];
                result = max(product, result);
                product = 1;
            }
            if (i - 1 >= 0 && i - 2 >= 0 && i - 3 >= 0 && j - 1 >= 0 && j - 2 >= 0 && j - 3 >= 0 && i >= 0 && j < 20 &&
                j >= 0 && i < 20) {
                product = grid[i - 1][j - 1] * grid[i - 2][j - 2] * grid[i - 3][j - 3] * grid[i][j];
                result = max(product, result);
                product = 1;
            }
            if (i + 1 < 20 && i + 2 < 20 && i + 3 < 20 && j + 1 < 20 && j + 2 < 20 && j + 3 < 20 && i >= 0 && j < 20 &&
                j >= 0 && i < 20) {
                product = grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3] * grid[i][j];
                result = max(product, result);
                product = 1;
            }

        };
    }


    cout << result << endl;


    return 0;
}
