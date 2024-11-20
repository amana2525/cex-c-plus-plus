#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[100][100];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    int maxSum = INT_MIN;

    for (int r1 = 0; r1 < n; ++r1) {
        int temp[100] = {0};
        for (int r2 = r1; r2 < n; ++r2) {
            for (int col = 0; col < n; ++col)
                temp[col] += matrix[r2][col];

            int currentSum = 0, bestSum = INT_MIN;
            for (int col = 0; col < n; ++col) {
                currentSum = max(temp[col], currentSum + temp[col]);
                bestSum = max(bestSum, currentSum);
            }
            maxSum = max(maxSum, bestSum);
        }
    }

    cout << maxSum << endl;
    return 0;
}
