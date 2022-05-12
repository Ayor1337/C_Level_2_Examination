/* 给定程序的功能是根据形参m (2≤K9)，在二维数组中存放一张m行m列的表格，由main()函数输出。
 * 例如，若输入2则输出:
 * 1 2
 * 2 4
 * 如果输入4，则输入
 * 1 2 3 4
 * 2 4 6 8
 * 3 6 9 12
 * 4 8 12 16
 * */

#include <stdio.h>
#define M 10

int a[M][M] = {0};

fun(int a[][M], int m){
    int j, k;
    for (j = 0; j < m; j++)
        for (k = 0; k < m; k++)
            a[j][k] = (k+1)*(j+1);
}

int main() {
    int i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);
    fun(a, n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}
