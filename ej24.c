#include <stdio.h>
#include <stdlib.h>
#include "mensajes1.h"

int main()
{
    unsigned int n,dia;

    puts(MSJ_BIENVENIDA1);
    puts(MSJ_BIENVENIDA2);

    scanf("%d",&dia);

    if(dia<1 || dia>366)
    {
        puts(MSJ_ERR_RANGO);
        return 0;
    }

    n = dia%7;
    switch(n)
    {
        case 1:
            puts(DOM);
            break;
        case 2:
            puts(LUN);
            break;
        case 3:
            puts(MAR);
            break;
        case 4:
            puts(MIE);
            break;
        case 5:
            puts(JUE);
            break;
        case 6:
            puts(VIE);
            break;
        case 0:
            puts(SAB);
            break;
    }
    return 0;
}
