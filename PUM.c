#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count = 0;
    for (int i = 1; i <= num * 4; i++)
    {
        if (count == 3)
        {
            printf("PUM\n");
            count = 0;
            continue;
        }

        printf("%d ", i);
        count = count+ 1;
    }

    return 0;
}
