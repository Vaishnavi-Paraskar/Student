#include <stdio.h>

int main() {
    int n = 7;
    char str[n] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    int s[n] = {1000, 500, 100, 50, 10, 5, 1};
    int k;
    printf("Enter the decimal number: ");
    scanf("%d", &k);

    while (k > 0) {
        // Add a condition to break the loop when k becomes zero
        if (k == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            if (k >= s[i]) {
                printf("%c", str[i]);
                k = k - s[i];
                break; // Add a break to stop the inner loop iteration once a match is found
            }
        }
    }
    printf("\n");
    return 0;
}
