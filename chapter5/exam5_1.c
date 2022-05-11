/* 下列给定程序中，函数fun()的功能是:删除字符串s中所有空白字符(包括Tab字符、回车符及换行符)。
 * 输入字符串时用"#"结束输入。试题程序: */

#include <string.h>
#include <stdio.h>
#include <ctype.h>

void fun(char *p){
    int i, t;
    char c[80];
    for (i = 0, t = 0; p[i]; i++)
        if (!isspace(*(p++)))
            c[t++] = p[i];
    c[t] = '\0';
    strcpy(p, c);
}

int main(){
    char c, s[80];
    int i = 0;
    printf("Input a string: ");
    c = getchar();
    while (c != '#'){
        s[i] = c;
        i++;
        c = getchar();
    }
    s[i] = '\0';
    fun(s);
    puts(s);
}
