/*
 给定程序modi.c中函数fun的功能是:根据输入的三个边长(整型值)，
 判断能否构成三角形:构成的是等边三角形，还是等腰三角形。若能构成
 等边三角形函数返回3，若能构成等腰三角形函数返回2，若能构成一般三角形函数返回1，
 若不能构成三角形涵数返回0。请改正函数fun 中指定部位的错误，使它能得出正确的结果。
 注意:不要改动main函数,
 */

#include <math.h>
#include <stdio.h>

int fun(int a, int b, int c){
    if (a + b > c && b + c > a && a + c > b){
        if (a == b && b == c)
            return 3;
        else if (a == b || b==c || a == c)
            return 2;
        else return 1;
    } else return 0;
}

main(){
    int a, b, c, shape;
    printf("\nInput a,b,c: ");
    scanf("%d %d %d",&a, &b, &c);
    printf("\na=%d, b=%d, c=%d",a, b, c);
    shape = fun(a, b, c);
    printf("\n\nThe shape :%d\n",shape);
}

