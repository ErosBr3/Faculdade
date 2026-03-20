#include <stdio.h>

int main() {
    int m[3][3], i, j, soma = 0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor: ");
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
            if(m[i][j]%2!=0)
                soma+=m[i][j];
        }
        printf("\n");
    }

    printf("Soma dos impares: %d",soma);

    return 0;
}