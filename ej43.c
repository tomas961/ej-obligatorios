#include <stdio.h>
#include <stdlib.h>
#include "mensajes2.h"

float rendimiento_promedio(float,int);
float rendimiento_max(float,int);
float rendimiento_min(float,int);
/*float distancia_total(float,int);*/


int main()
{
    float km_r,precio_comb,precio_total,rnd_tanque,ltr_consumidos,rnd_max,rnd_min,rnd_prom,dist_tot,rnd_total,comb_total,costo_total;
    int n=0,i;

    do
    {
        printf("%s",MSJ_KM_RECORRIDOS);
        scanf("%f",&km_r);
        if(km_r == -1)
        {
            break;
        }
        printf("%s",MSJ_$_COMBUSTIBLE);
        scanf("%f",&precio_comb);
        printf("%s",MSJ_$_TOTAL);
        scanf("%f",&precio_total);

        ltr_consumidos = precio_total/precio_comb;

        rnd_tanque = (ltr_consumidos*100)/km_r;

        printf("%s%.2f\n",MSJ_RND_TANQUE,rnd_tanque);

        n++;
        rnd_total = rnd_tanque + rnd_total;
        rnd_prom = rnd_total/n;
        dist_tot = dist_tot + km_r;
        comb_total = comb_total + ltr_consumidos;
        costo_total = costo_total + precio_total;

    }
    while(km_r != -1);

    for(i=0;i<n;i++)
    {
        if(rnd_tanque>rnd_max)
        {
            rnd_max = rnd_tanque;
        }
    }
    for(i=0;i<n;i++)
    {
        if(rnd_tanque<rnd_min)
        {
            rnd_min = rnd_tanque;
        }
    }

    puts("");
    printf("%s%f\n",MSJ_RND_PROM,rnd_prom);
    printf("%s%.2f\n",MSJ_MAX_PROM,rnd_max);
    printf("%s%.2f\n",MSJ_MIN_PROM,rnd_min);
    printf("%s%.2f\n",MSJ_DIST_TOT,dist_tot);
    printf("%s%.2f\n",MSJ_COMBUSTIBLE_TOT,comb_total);
    printf("%s%.2f\n",MSJ_$_TOT,costo_total);
    return 0;
}

