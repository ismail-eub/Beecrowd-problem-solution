#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int D[n];

    int count = 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            D[count] = i;
            count++;
        }
    }


    for (i = 0; i < count; i++) {
        printf("%d\n", D[i]);
    }

    return 0;
}
