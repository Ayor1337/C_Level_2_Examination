/*
 请编一个函数float fun(double h)，函数的功能是对变量h中的值保留2位小数，
 并对第三位进行四舍五入（规定h 中的值为正数）。例如: h值为8.32433，
 则函数返回8.320000;h值为8.32533，则函数返回8.330000。
 注意:部分源程序存在文件prog.c中。请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float fun(float h){
    long num;
    h += 0.005;
    h = h *100;
    num = h;
    h = num;
    h = h/100;
    return h;
}

main(){
    float a;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("The original data is: ");
    printf("%f \n\n",a);
    printf("The result: %f\n", fun(a));

}
