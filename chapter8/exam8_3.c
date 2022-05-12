/* 编写函数fun，它的功能是:计算正整数n的所有因子（1和n除外)之和作为函数值返回。
 * 例如: n=120 时，函数值为239。注意:部分源程序存在文件prog.c中。
 * 请勿改动主函数main和其他函数中的任何内容，仅在函数fun 的花括号中填入你编写的若干语句。 */

#include <conio.h>
#include <stdio.h>

int fun(int n) {
    int i, s = 0;
    for (i = 2; i <= n - 1; i++){
        if (n % i == 0)
            s += i;
    }
    return s;
}

int main(){
    printf("%d\n", fun(120));
}
