#include <stdio.h>

int main() {
    int N;
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int count;

    scanf("%d", &N);
    printf("%d\n", N);

    for (int i = 0; i < 7; i++) {
        count = N / banknotes[i];
        N %= banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", count, banknotes[i]);
    }

    return 0;
}
