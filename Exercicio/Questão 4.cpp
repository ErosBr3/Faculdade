#include <stdio.h>

int main() {
    int m[3][3], i, j, maior, menor;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor: ");
            scanf("%d",&m[i][j]);
        }
    }

    maior = menor = m[0][0];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(m[i][j]>maior) maior=m[i][j];
            if(m[i][j]<menor) menor=m[i][j];
        }
    }

    printf("Maior: %d\nMenor: %d",maior,menor);

    return 0;
}