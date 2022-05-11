/* 给定程序中，函数fun的功能是:将N×N矩阵主对角线元素中的值与反向对角线对应位置上元素中的值进行交换。
 * 例如，若N=3，有下列矩阵: */
//1 2 3   交换后为 3 2 1
//4 5 6          4 5 6
//7 8 9          9 8 7

#include <stdio.h>
#define N 3

void fun(int t[][N], int n){
    int i, s;
    for (i = 0; i < n; i++){
        s = t[i][i];
        t[i][i] = t[i][n - i - 1];
        t[i][n- 1 - i] = s;
    }
}

int main() {
    int t[][N] = {1,2,3,4,5,6,7,8,9}, i, j;
    printf("\nThe origin array:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }
    fun(t, N);
    printf("\nThe result is:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }
}
