/*
 下列给定程序中函数fun(的功能是计算1/n!的值。例如:给n输入5，则输出0.008333。
 请改正程序中的错误，使它能得到正确结果。
 注意:不要改动main函数，不得增行或册行，也不得更改程序的结构。试题程序:
*/

#include <stdio.h>
#include <conio.h>

float fun(int n){
    double result = 1.0;
    if (n == 0)
        return 1.0;
    while (n > 1 && n < 170)
        result *= n--;
    result = 1 / result;
    return result;
}

int main() {
    int n;
    printf("Input N:");
    scanf("%d",&n);
    printf("\n1/%d!=%lf\n",n, fun(n));
}
