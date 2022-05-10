/*下列给定程序中，函数fun()的功能是:根据输入的3个边长(整型值)，判断能否构成三角形:
 * 若能构成等边三角形，则返回3，若是等腰三角形，则返回2，若能构成三角形则返回1，
 * 若不能，则返回0。试题程序:*/

#include <math.h>
#include <stdio.h>

int fun(int a, int b, int c){
    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c)
            return 3;
        else if (a == b || b == c || a == c)
            return 2;
        else return 1;
    } else return 0;
}

int main(){
    int a, b, c, shape;
    printf("\nInput a, b, c: ");
    scanf("%d %d %d",&a, &b, &c);
    shape= fun(a, b, c);
    printf("\n\nThe shape :%d\n", shape);
}
