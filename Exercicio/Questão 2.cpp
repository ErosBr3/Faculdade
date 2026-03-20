#include <stdio.h>

int main() {
    int m[4][4], i, j, soma;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um valor: ");
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }

    for(j=0;j<4;j++){
        soma=0;
        for(i=0;i<4;i++)
            soma+=m[i][j];
        printf("Soma coluna %d: %d\n",j,soma);
    }

    return 0;
}