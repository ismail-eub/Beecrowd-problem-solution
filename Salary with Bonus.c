#include<stdio.h>
int main()
{
    char sellerName[50];

    double a,b,x;
    scanf("%[^\n]s", sellerName);
    scanf("%lf%lf",&a,&b);
    x=a+(b*0.15);
    printf("TOTAL = R$ %.2lf\n",x);
    return 0;
}
