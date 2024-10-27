#include <stdio.h>
#include <time.h>
#include "nascimento.h"

int main() {
    data_t nascimento;

    printf("Digite a data de nascimento ( formato dia mes ano): ");
    scanf("%d %d %d", &nascimento.dia, &nascimento.mes, &nascimento.ano);

    int dias = dias_de_vida(nascimento);
    printf("Voce tem atualmente %d dias de vida.\n", dias);

    return 0;
}