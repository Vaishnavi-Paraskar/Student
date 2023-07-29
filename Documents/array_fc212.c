#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a[n];
    int p = 1, c = 0, i = 0;

    for (p = 1; p <= n; p++) {
        int j = 1, k = 0;
        while (j <= p) {
            if (p % j == 0) {
                k = k + 1;
                j = j + 1;
            } else {
                j = j + 1;
            }
        }

        if (k == 2) {
            a[i] = p;
            c = c + 1;
            i = i + 1;
        }
    }

    for (int i = 0; i < c; i++) {
        printf("arr[%d]: %d\n",i, a[i]);
    }

    return 0;
}

