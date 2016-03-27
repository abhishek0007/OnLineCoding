int findMaxSum(int matrix[numRows][numCols]) {
    int maxSum = 0;

    for (int left = 0; left < numCols; left++) {
        int temp[numRows] = {0};

        for (int right = left; right < numCols; right++) {
            // Find sum of every mini-row between left and right columns and save it into temp[]
            for (int i = 0; i < numRows; ++i)
                temp[i] += matrix[i][right];

            // Find the maximum sum subarray in temp[].
            int sum = kadane(temp, numRows);

            if (sum > maxSum)
                maxSum = sum;
        }
    }

    return maxSum;
}
