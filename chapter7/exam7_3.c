/*请编一个函数int day(int k,int m,int n)，其功能是:返回小蚕需要多
少天才能爬到树顶（树高k厘米，小蚕每天白天向上爬m厘米，每天晚上因睡觉向下滑n厘米，爬到顶后不再下滑）(n<m<k) 。
例如，若分别输入253、71、29给k、m、n，则输出结果为:6。注意:此程序存贮在prog.c中。
请勿改动主程序main、函数WriteData和函数compute 中的任何内容，仅在函数day的花括号中填入你编写的若干语句。 */

#include <conio.h>
#include <stdio.h>

/* my version
int day(int k, int m, int n){
    int days, rate;
    for (day = 1, rate = 0; rate < k; day++){
        rate += m;
        if (rate >= k)
            break;
        else
            rate -= n;
    }
    return days;
}
*/

int day(int k, int m, int n){
    int days, height = 0;
    for (days = 1; 1; days++){
        height += m;
        if (height >= k) {
            return days;
        } else
        height -= n;
    }
}

int main() {
    int k, m, n;
    printf("\nPlease enter 3 numbers: ");
    scanf("%d %d %d",&k, &m, &n);
    printf("\nFor %d days, worm will be at the top", day(k, m, n));
}
