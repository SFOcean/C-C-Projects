//This code can calculate any operation of two numbers. just input the two numbers as it is done in the calculator.



#include <stdio.h>
#include <math.h>


double add (double a, double b)
    {

        double sum, i;
        sum = a+ b;
        return sum;
    }

double sub (double a, double b)
    {
        double min;
        min = a - b;
        return min;
    }
double mul (double a, double b)
{
    double mu;
    mu = a * b;
    return mu;
}
float div (float a, float b)
{
    float divi;
    divi = a / b;
    return divi;
}

int main()
{
    double c, d, ad, su, m, power;
    float di;
    char op[2];

    printf ("This code can calculate any operation of two numbers. \nJust input the two numbers as it is done in a normal calculator with the following operation sign .\n");
    printf ("Example:\n12\n+\n6\n=\n18\n\nCalculator:\n");

    scanf ("%lf", &c);
    scanf ("%s", &op);
    scanf ("%lf", &d);



    if (op[0] == '+')
    {
      ad = add (c, d);
      printf ("=\n%.2lf\n", ad);
    }

    else if (op[0] == '-')
    {
       su = sub (c, d);
       printf ("=\n%.2lf\n", su);
    }

    else if (op[0] == '*')
    {
        m = mul (c, d);
        printf ("=\n%.2lf\n", m);
    }

    else if (op[0] == '/')
    {
      di = div (c, d);
      printf ("=\n%.2f\n", di);
    }
    else if (op[0] == '^')
    {
       power = pow (c, d);
    printf ("=\n%.2lf", power);
    }

    return 0;
}
