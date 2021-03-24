
#include <stdio.h>

/* fahrenheit-celsius table */
int main()
{
    float fhr, cls;
    int lwr, uppr, stp; /* fahrenheit lower bound, upper bound, temperature step*/
    lwr = 0;
    uppr = 300;
    stp = 20;
    fhr = lwr;
    printf("fahrenheit-celsius table\n");
    printf("fahrenheit / celsius\n");
    while (fhr <= uppr)
    {
        cls = (5.0 / 9.0) * (fhr - 32.0);
        printf("%9.0f %9.1f\n", fhr, cls);
        fhr = fhr + stp;
    }

    return -1;
}