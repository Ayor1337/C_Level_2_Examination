/*
 给定程序modi.c中函数fun的功能是:求两个形参的乘积和商数，并通过形参返回调用程序。
 例如输入:61.82和12.65，输出为:c =782.023000 d = 4.886957。
 请改正fun函数中的错误，使它能得出正确的结果。注意:不要改动main函数。
*/

#include <stdio.h>

void fun(double a, double b, double *x, double *y){
   *x = a * b; *y = a / b;
}

main(){
    double a, b, c, d;
    printf("Enter a, b: ");
    scanf("%lf%lf",&a, &b);
    fun(a, b, &c, &d);
    printf("c = %f d = %f\n",c, d);
}
