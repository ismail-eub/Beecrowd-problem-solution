#include <stdio.h>

int main()
{
    int numbers[5];
    int Even=0, Odd=0, Positive=0,  Negative= 0;



    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] %2== 0)
        {
            Even++;
        }
        {
            if (numbers[i] %2!= 0)
                Odd++;
        }
        {
            if (numbers[i] > 0)
                Positive++;
        }
        {
            if (numbers[i] <0)
                Negative++;
        }


    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",Even, Odd, Positive, Negative);

    return 0;
}
