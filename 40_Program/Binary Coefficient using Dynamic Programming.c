#include <stdio.h>

int main() {
    int n, k;
    
    // Prompt the user to enter values for n and k
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);

    // Declare a 2D array to store binomial coefficients
    int C[n+1][k+1];
    int i, j;

    // Compute binomial coefficients using dynamic programming
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= k; j++) {
            // Base cases: C(i, 0) = 1 and C(i, i) = 1
            if (j == 0 || j == i)
                C[i][j] = 1;
            // If j is greater than i, it should be 0
            else if (j > i)
                C[i][j] = 0;
            // Use the recursive formula: C(i, j) = C(i-1, j-1) + C(i-1, j)
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    // Print the result
    printf("Binomial Coefficient C(%d, %d) is %d\n", n, k, C[n][k]);

    return 0;
}
