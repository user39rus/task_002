#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1 && n > 0 && n < 30) {
        printf("1");
        --n;
        int c = n;
        for (int k = 1; k <= n; k++) {
            printf(" %d", c);
            c = c * (n - k);
            c = c / (k + 1);
        }
    } else {
        printf("Puck you, Verter!");
        return 1;
    }
    return 0;
}