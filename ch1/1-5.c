#include <stdio.h>

/* fahrenheit-celsius table */
int main()
{
    int fhr;
    printf("fahrenheit-celsius table\n");
    for (fhr = 300; fhr >= 0; fhr = fhr - 20)
    {
        printf("%3d %6.1f\n", fhr, (5.0 / 9.0) * (fhr - 32.0));
    }
    return -1;
}