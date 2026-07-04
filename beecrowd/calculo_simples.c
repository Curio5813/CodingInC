#include <stdio.h>


int main(){

    int cod1, cod2, qt1, qt2;

    double pre_u1, pre_u2, valor;

    scanf("%d %d %lf %d %d %lf", &cod1, &qt1, &pre_u1, &cod2, &qt2, &pre_u2);

    valor = (qt1 * pre_u1) + (qt2 * pre_u2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valor);

    return 0;
}