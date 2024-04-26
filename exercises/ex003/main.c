# include <stdio.h>

// Escreva um programa que recebe duas notas, 
// calcula a media e mostra essa media

int main(void) {
    float grade1, grade2, average = 0;
    printf("----------------------------------------------------\n");
    printf("Input the first grade: ");
    scanf("%f", &grade1);
    printf("\nInput the second grade: ");
    scanf("%f", &grade2);
    printf("----------------------------------------------------\n");
    average = (grade1 + grade2) / 2;
    printf("The average between the grades %.1f and %.1f is: %.1f\n", grade1, grade2, average);
    printf("----------------------------------------------------");

    return 0;
}