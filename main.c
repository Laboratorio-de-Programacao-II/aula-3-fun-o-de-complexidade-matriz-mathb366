#include <stdio.h>

/*Questão 1 - T(n) = 2n+1*/
/*Questão 2 - Por quase 2, pois T(2n) = 2(2n)+1 = 4n+1 */

int conta_pares(int n, int mat[][n]) {
    int quant = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(mat[i][j]%2 == 0){
                quant++;
            }
        }
    }
    return quant;
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(n, mat));
    return 0;
}
