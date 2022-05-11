/* 请编写一个函数fun()，它的功能是:求出1到m(含m)之内能被7或11整除的所有整数放在数组a中，通过n返回这些数的个数。
 * 例如，若传给m的值为50，则程序输出:7 11 14 21 22 28 33 35 42 44 49
 * 注意:部分源程序给出知下,请勿改动主函数main和其他函数中的任何内容，仅在函数fun 的花括号中填入所编写的若干语句。
 * 试题程序: */

#include <conio.h>
#include <stdio.h>
#define M 100

void fun(int m, int *a, int *n){
    int i, j = 0;
    for (i = 1; i <= m; i++) {
        if (i % 7 == 0 || i % 11 == 0) {
            a[j++] = i;
        }
        *n = j;
    }
}

int main() {
    int aa[M], n, k;
    fun(500, aa, &n);
    for (k = 0; k < n; k ++)
        if ((k + 1) % 20 == 0){
            printf("%4d", aa[k]);
            printf("\n");
        } else
            printf("%4d", aa[k]);
    printf("\n");

}
