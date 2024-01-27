#include<stdio.h>
int main()
{
    float Salary,Money_earned,New_Salary,percentage;
    scanf("%f",&Salary);



    if(Salary<=400)
    {
        percentage=15;
    }

    else if(Salary<=800.00)
    {
        percentage=12;
    }

    else if(Salary<=1200.00)
    {
        percentage= 10;
    }

    else if(Salary<=2000.00)
    {
        percentage=7;
    }

    else if(Salary>2000.00)
    {
        percentage=4;
    }


    Money_earned = Salary * (percentage/100);
    New_Salary =  Salary + Money_earned;

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",New_Salary,Money_earned,percentage);

    return 0;

}
