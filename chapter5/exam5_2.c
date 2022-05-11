/* 下列给定程序中，函数fun()的功能是:根据整型形参n,计算如下公式的值
 * A1=1,A21/ ( 5+A1） ,A3=1/ (5+A2) ,…, An=1/ (5+A (n-1) )
 * 例如，若n=10，则应输出0.192582。请改正程序中的错误，使它能得到正确结果。
 * 注意:不要改动main函数，不得增行或册行，也不得更改程序的结构。试题程序: */

#include <conio.h>
#include <stdio.h>

float fun(int n){
    double A = 1;
    int i;

    for (i = 2; i < n; i ++)
        A = 1.0 / (5 + A);
    return A;
}

int main() {
    int n;
    printf("\nPlease enter n: ");
    scanf("%d", &n);
    printf("A%d=%lf\n", n, fun(n));
}
