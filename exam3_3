/*
 请编写函数fun，对长度为7个字符的字符串，除首、尾字符外，将其余5个字符按降序排列。
 例如，原来的字符串为CEAedca，排序输出为CedcEAa。注意:部分源程序存在文件prog.c中。
 请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/

#include <stdio.h>
#include <ctype.h>

int fun(char *s, int num){
    int i, j, t;
    for (i = 1; i < num - 2; i++){
        for (j = i + 1; j < num - 1; j++){
            if (s[i] < s[j]){
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    return 0;
}

main(){
    char s[10];
    printf("请输入7个字符的字符串: ");
    gets(s);
    fun(s, 7);
    printf("\n%s", s);
}
