/*
 下列给定程序中，函数fun()的功能是:通过某种方式实现两个变量值的交换，
 规定不允许增加语句和表达式。例如变量a初值为8，b 初值为3，程序运行后a中的值为3，b中的值为8。试题程序:
*/

#include <conio.h>
#include <stdio.h>

int fun(int *x, int y) {
    int t; //
    t = *x;
    *x = y;
    return t;
}

main(){
    int a = 3, b = 8;
    printf("%d %d\n",a, b);
    b = fun(&a, b);
    printf("%d %d\n",a, b);
}
