#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ordem, i, j, count = 0, soma=0;
    scanf("%d", &ordem);
    int matriz[ordem][ordem];
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            if (i>0 && matriz[i-1][j]>=0){ 
                soma+=matriz[i-1][j];
                count++;
            }
            if (j>0 && matriz[i][j-1]>=0){
                soma+=matriz[i][j-1];
                count++;
            }
            if (j!=ordem-1 && matriz[i][j+1]>=0){
                soma+=matriz[i][j+1];
                count++;
            }
            if (i!=ordem-1 && matriz[i+1][j]>=0){
                soma+=matriz[i+1][j];
                count++;
            }
        }
    }
    printf("%d\n", count);
    printf("%d", soma);
	return 0;
}