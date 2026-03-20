#include <stdio.h>

int main() {
    int m[3][3], i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor: ");
            scanf("%d",&m[i][j]);
        }
    }

    printf("Nao diagonal principal:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i!=j)
                printf("%d ",m[i][j]);

    printf("\nNao diagonal secundaria:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i+j!=2)
                printf("%d ",m[i][j]);

    return 0;
}