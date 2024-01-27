#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        int count = 0;

        for (int j = 2; j <= num; j++) {
            if (num % j == 0) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d eh primo\n", num);
        } else {
            printf("%d nao eh primo\n", num);
        }
    }

    return 0;
}
