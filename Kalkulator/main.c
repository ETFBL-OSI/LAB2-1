#include <stdio.h>
#include "operacije.h"

int main()
{
    printf("Kalkulator\n");

    double x, y;
    char c;
    printf("Unesite dva broja i znak operacije:\n");
    printf("Za mnozenje '*'\n");
    printf("Za djeljenje '/'\n");
    printf("Za sabiranje '+'\n");
    printf("Za oduzimanje '-'\n");
    scanf(&x,&y,&c);

    double resoult;

    switch (c) {

        case '*':
    resoult = pomnozi(x,y);
    break;
case '/':
    resoult = podijeli(x,y);
    break;
    case '+':
    resoult = saberi(x,y);
    break;
    case '-':
    resoult = oduzmi(x,y);
    break;
    }

    return 0;
}
