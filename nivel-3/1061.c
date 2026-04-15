#include <stdio.h>

int main(){
    int seg1, min1, hor1, dia1;
    int seg2, min2, hor2, dia2;
    int total1,total2,total;

    scanf( "Dia %d",&dia1);
    scanf("%d : %d : %d",&hor1,&min1,&seg1);
    scanf(" Dia %d",&dia2);
    scanf("%d : %d : %d",&hor2,&min2,&seg2);
    //dias
    total1 = (dia1*24*60*60)+ (hor1*60*60)+ (min1*60)+seg1;
    total2 = (dia2*24*60*60)+ (hor2*60*60)+ (min2*60)+seg2;

    total = total2 - total1;
    
    /*
    printf("%d dia(s)",dias);
    printf("%d hora(s)",horas);
    printf("%d minuto(s)",minutos);
    printf("%d segundo(s)",segundos);
    */

    return 0;
}