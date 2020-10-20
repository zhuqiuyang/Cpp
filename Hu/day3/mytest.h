/*************************************************************************
	> File Name: mytest.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#ifndef _MYTEST_H
#define _MYTEST_H

#include <stdlib.h>

#define COLOR(msg, code) "\033[0;1;" #code "m" msg "\033[0m"
#define RED(msg)    COLOR(msg, 31)
#define GREEN(msg)  COLOR(msg, 32)
#define YELLOW(msg) COLOR(msg, 33)
#define BLUE(msg)   COLOR(msg, 34)

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n); 
    for (int i = 0; i < n; i++) arr[i] = rand() % n;
    return arr;
}

bool check(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

#define TEST(func, arr, n) __TEST(func, #func, arr, n)

void __TEST(
    void (*func)(int*,int,int), 
    const char *func_name, 
    int *arr,
    int n
) {
    int *temp = (int *)malloc(sizeof(int) *n);
    memcpy(temp, arr, sizeof(int) * n);
    long long b = clock();
    func(temp, 0, n - 1);
    long long e = clock();
    if (check(temp, n)) {
        printf(GREEN("[  OK    ] "));
    } else {
        printf(RED("[ FAILED ] "));
    }
    printf("%s " YELLOW("(%lld ms)\n"), func_name, 1000 * (e - b) / CLOCKS_PER_SEC);
    free(temp);
    return ;
}


#endif
