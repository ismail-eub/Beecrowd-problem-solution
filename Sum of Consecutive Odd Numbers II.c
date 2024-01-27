#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sums[1000];

    for (int i = 0; i < N; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0, temp;

        if (X > Y) {
            temp = X;
            X = Y;
            Y = temp;
        }

        for (int j = X + 1; j < Y; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }

        sums[i] = sum;
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", sums[i]);
    }

    return 0;
}
