#include <stdio.h>
#include "operacije.h"

int main()
{
    printf("Kalkulator\n");

    double x, y;
    char c;
    int z = 1;

    while(z) {

        printf("Unesite dva broja i znak operacije:\n");
        printf("Za mnozenje \'*\'\n");
        printf("Za djeljenje \'/\'\n");
        printf("Za sabiranje \'+\'\n");
        printf("Za oduzimanje \'-\'\n");
        printf("Za kraj \'q\'\n");
        scanf("%lf%c%lf", &x,&y,&c);

        double resoult;

        switch (c) {
            case '*':
                printf("=%lf", pomnozi(x,y));
                break;
            case '/':
                if(y != 0)
                    printf("=%lf", podijeli(x,y));
                else
                    printf("Greska\n");
                break;
            case '+':
                printf("=%lf", saberi(x,y));
                break;
            case '-':
                printf("=%lf", oduzmi(x,y));
                break;
            default:
                z = 0;
            }
    }
    return 0;
}
