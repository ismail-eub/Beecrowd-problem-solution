#include<stdio.h>
#include<math.h>
int main()
{
    int N, num;
    scanf("%d",&N);
    int sum=0, A[1000];

    for( int i=0; i<N; i++)
    {
        scanf("%d",&num);
        sum=0;
        for(int i=0; i<num; i++)
        {

           sum = sum + pow(-1,i);
        }

        A[i]=sum;
    }

    for( int i=0; i<N; i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
