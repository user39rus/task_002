#include <stdio.h>

int bc(int n, int k);
int fact(int n);

int main() {
    int n = 1;
    if (scanf("%d", &n) == 1 && n > 0 && n < 11) {
        int m = 0;
        int end = 0;
        for (int i = 0; end < n * n; i++)
            for (int j = 0; j <= i && end < n * n; j++, end++) {
                printf("%d", bc(i, j));
                if (m == n - 1) {
                    m = 0;
                    if (end != n * n - 1) printf("\n");
                } else {
                    printf(" ");
                    m++;
                }
            }
    } else {
        printf("Puck you, Verter!");
        return 1;
    }
    return 0;
}

int bc(int n, int k) { return fact(n) / (fact(n - k) * fact(k)); }

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    if (n > 1) return (n * fact(n - 1));
    return 0;
}