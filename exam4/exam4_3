/* 函数fun的功能是:将两个两位数的正整数a、b 合并形成一个整数放在中。
 * 合并的方式是:将a数的十位和个位数依次放在。数的千位和十位上，b数的十位和个位数依次放在。
 * 数的百位和个位上。例如，当a=45, b=12。调用该函数后，c=4152。
 * 注意:部分源程序存在文件 prog.c中。请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。 */

#include <stdio.h>


/*  我的版本
void fun(int a, int b, long *c){
    int temp, result;
    temp = a * 100;
    result = temp + b;
    *c = result;
}
*/
void fun(int a, int b, long *c){
    int a_up;
    int a_low;
    int b_up;
    int b_low;
    a_up = a / 10;
    a_low = a % 10;
    b_up = b / 10;
    b_low = b % 10;
    *c = a_up * 1000 + a_low * 100 + b_up * 10 + b_low;
}

int main(){
    int a, b;
    long c;
    printf("Input a, b:");
    scanf("%d %d", &a, &b);
    fun(a, b, &c);
    printf("The result is: %ld", c);
}
