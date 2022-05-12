/* 下列给定程序中函数fun()的功能是:将长整型数中每一位上为偶数的数依次逆向取出，构成一个新数放在t中。
 * 高位在低位，低位在高位。例如当s 中的数为25846513时，t中的数为6482。
 * 请改正函数fun()中的错误，使它能得出正确的结果。注意:不要改动main函教，不得增行或册行，也不得更改程序的结构。
 * 试题程序: */

#include <stdio.h>
#include <conio.h>

void fun(long s, long *t){
    int d;
    long s1 = 1, i = 1;
    *t = 0;

    while (s/i > 0)
        i = i * 10;

    i = i / 10;

    while (s > 0){
        d = s / i;
        if (d%2 == 0) {
            *t = d * s1 + *t;
            s1 *= 10;
        }
        s = s % i;
        i = i / 10;
    }
}

int main() {
    long s, t;
    printf("\nPlease enter s: ");
    scanf("%ld", &s);
    fun(s, &t);
    printf("The result is :%ld\n", t);
}
