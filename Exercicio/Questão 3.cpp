#include <stdio.h>

int main() {
    float m[3][4];
    int i,j;
    float soma;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Digite um valor: ");
            scanf("%f",&m[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%.1f ",m[i][j]);
        printf("\n");
    }

    for(i=0;i<3;i++){
        soma=0;
        for(j=0;j<4;j++)
            soma+=m[i][j];
        printf("Soma linha %d: %.1f\n",i,soma);
    }

    return 0;
}