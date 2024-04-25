// Escreva um programa que receba duas notas, calcula a média e mostra essa média

 #include <stdio.h>
int main(void) {
    float nota1, nota2, media = 0;


    printf("\nInsira a primeira nota: ");
    scanf("%f", nota1);
    printf("\nInsira a segunda nota: ");
    scanf("%f", nota2);
    media = (nota1 + nota2) / 2;
    // printf("\nA média entre a nota %.1f e a %.1f, é: %.1f", nota1, nota2, media);

    return 0;
}