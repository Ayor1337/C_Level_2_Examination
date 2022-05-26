#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct key{
    char *word;
    int count;
};

struct key keytab[]= {
        {"auto", 0},
        {"break", 0},
        {"case", 0},
        {"char", 0},
        {"const", 0},
        {"continue", 0},
        {"default", 0},
        /* ......  */
        {"unsigned", 0},
        {"void", 0},
        {"volatile", 0},
        {"while", 0},
};

#define MAXWORD 100
#define NKEYS (sizeof keytab / sizeof(keytab[0]))  // struct key keytab里面有多少个数据

int getword(char *, int );
int binsearch(char *, struct key *, int );

int getword(char *word, int lim){  // 获取单词
    int c, getch(void);
    void ungetch(int);
    char *w = word;

    while (isspace(c = getch()))  // 跳过空格
        ;
    if (c != EOF)
        *w++ = c;       // 将得到的字符c存入字符数组word中
    if (!isalpha(c)) {      // 如果得到的不是字母，那么就给予一个结束符'\0'，然后返回c
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++) // 如果得到的字符不是字符也不是数字，那么就ungetch，并且直接退出循环
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}

int binsearch(char *word, struct key tab[], int n){
    int cond;
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if ((cond = strcmp(word, tab[mid].word)) < 0)
            high = mid - 1;
        else if (cond > 0)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main(){
    int n;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            n = binsearch(word, keytab, NKEYS);
            if (n >= 0){
                keytab[n].count++;
            }


    for (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%s: %d\n", keytab[n].word, keytab[n].count);
    return 0;
}