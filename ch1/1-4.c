#include <stdio.h>

/* celsius-fahrenheit table */
int main()
{
    float fhr, cls;
    int lwr, uppr, stp; /* celsius lower bound, upper bound, temperature step*/
    lwr = 0;
    uppr = 300;
    stp = 20;
    cls = lwr;
    printf("celsius-fahrenheit table\n");
    printf("celsius / fahrenheit\n");
    while (cls <= uppr)
    {
        fhr = (9.0 / 5.0) * cls + 32.0;
        printf("%5.0f %9.1f\n", cls, fhr);
        cls = cls + stp;
    }
    return -1;
}