#include <stdio.h>
#include <stdlib.h>

int main() {
    int operation;
    float valueFirst, valueSecond;
    printf("Qual operacao voce quer fazer? 1(+), 2(-), 3(*) ou 4(/)\n");
    scanf("%d", &operation);
    system("cls");
    printf("Digite o primeiro numero:\n ");
    scanf("%f", &valueFirst);
    system("cls");
    printf("Digite o segundo numero:\n ");
    scanf("%f", &valueSecond);
    system("cls");
    switch(operation) {
        case 1:
        printf("%f", valueFirst + valueSecond);
        break;
        case 2:
        printf("%f", valueFirst - valueSecond);
        break;
        case 3:
        printf("%f", valueFirst * valueSecond);
        break;
        case 4:
        printf("%f", valueFirst / valueSecond);
        break;
    }
    return 0;
}