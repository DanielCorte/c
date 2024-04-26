#include <stdio.h>

/* Escreva um programa que recebe duas notas, 
   calcula a media e mostra essa media

   Inclua se o usuário foi aprovado ou reprovado

   Media >= 7.0 == Aprovado
   Media < 5.0 == Reprovado
   Media entre 5.0 e 6.9 == Exame

   Substitua a menor nota dele pela nova nota do exame e diga na tela se ele foi
   aprovado ou reprovado
*/

int main(void) {
    float av1, av2, media, sit = 0;
    printf("-------------------\n");
    printf("Informe a nota 1: ");
    scanf("%f", &av1);
    printf("Informe a nota 2: ");
    scanf("%f", &av2);
    media = (av1 + av2) / 2;
    printf("Media: %.1f", media);
    printf("\n-------------------");
    if (media >= 7) {
        sit = 1;
        printf("\nSituation: APROVADO!");
    } else {
        if (media < 5) {
            sit = 2;
            printf("\nSituation: REPROVADO!");
        } else {
            sit = 3;
            printf("\nSituation: EXAME!");
            printf("\n-------------------");
        }
    }
    if (sit = 3) {
        float av3 = 0;
        printf("\nInforme a nota do exame: ");
        scanf("%f", &av3);
        if (av1 > av2) {
            media = (av1 + av3) / 2;
            printf("\nA nova media e: %f", media);
        } else {
            media = av2 + av3;
            printf("\nA nova media e: %.1f", media);
        }
        if (media >= 7) {
            printf("\nAPROVADO!!");
            printf("\n-------------------");
        } else {
            printf("\nREPROVADO!!");
            printf("\n-------------------");
        }
    }
    return 0;    
}
    