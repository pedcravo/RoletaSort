#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define n 10

int RoletaSort(int *array, int ini, int fim ){
    
}

int main(){
    int array[n] = {67, 58, 49, 74, 54, 91, 3, 94, 16, 22};
    int resumo;
    
    printf("-- Seja bem vindo ao RoletaSort --\nDeseja ver um resumo do que é o RoletaSort?\n0 = ver resumo\n1 = ir para programa\n2 = sair\n");
    scanf("%i", &resumo);    
    
    if(resumo == 0){
        printf("\nAqui temos um array de 10 números inteiros que está desorganizado, o RoletaSort é um conjunto de 6 metódos de organizar esta array, cada rodada um metódo aleatório vai ser escolhido até que a array esteja organizada.\nO nosso array é [67, 58, 49, 74, 54, 91, 3, 94, 16, 22]\n");
    }
    else if(resumo == 2){
        return 0;
    }
    
    printf("\nOk, agora vamos começar o RoletaSortn\n");

    RoletaSort(array, 0, n);

    return 0;
}
