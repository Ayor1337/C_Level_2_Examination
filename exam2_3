/*
 请编写一个函数int fun(int x)，它的功能是:判断整数x是否是同构数。
 若是同构数，函数返回1;否则返回0。所谓“同构数”是指这样的数，它出现在它的平方数的右边。
 例如:输入整数5，5的平方数是25，5是25中右侧的数，所以5是同构数。
 x的值由主函数从键盘读入，要求不大于100。注意:部分源程序存在文件prog.c中。
 ”请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int fun(int x){
    if(x < 10){
        return !((x * x - x) % 10);
    } else{
        return !((x * x - x) % 100);
    }
}

main(){
    int x, y;
    printf("\nPlease enter a integer numbers: ");
    scanf("%d", &x);
    if (x > 100){
        printf("data error !\n");
        exit(0);
    }
    y = fun(x);
    if (y)
        printf("%d YES\n", x);
    else printf("%d NO!\n",x);
}

