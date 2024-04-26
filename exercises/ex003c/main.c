#include <stdio.h>

/* Media >= 7.0 == Aprovado
   Media < 5.0 == Reprovado
   Media entre 5.0 e 6.9 == Exame
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
        }
    }
    
    return 0;    
}