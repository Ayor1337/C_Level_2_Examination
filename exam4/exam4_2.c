/* 给定程序modi.c中，函数fun 的功能是:求两数平方根之和，作为函数值返回。
 * 例如，输入12和20，输出结果是: y=7.936238。
 * 请改正程序中的错误，使它能得出正确结果。注意:不要改动main函数， */

#include <stdio.h>
#include <math.h>

double fun(double *a, double *b){
    double c;

    c = sqrt(*a) + sqrt(*b);
    return c;
}

int main(){
    double a, b, y;
    printf("Enter a&b :");
    scanf("%lf %lf", &a, &b);
    y = fun(&a, &b);
    printf("y = %f\n", y);
}
