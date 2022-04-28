/* 程序填空题
给定程序的功能是求出1到1000之内能被7或11整除但不能
同时被d和11整除的所有整数放在数组a中，通过n返回这些数的个数。
*/

#include <stdio.h>

void fun(int *a, int *n){
    int i, j = 0;
    for (i = 1; i <= 1000; i++){
        if (((i % 7 == 0) || (i % 11 == 0)) && i % 77 != 0)
            a[j++] = i;
    }
    *n = j;
}

main(){
    int aa[1000], n, k;
    fun(aa, &n); //
    for (k = 0; k < n; k++)
        if ((k + 1) % 10 == 0)
            printf("\n");
        else printf("%5d", aa[k]);
}
