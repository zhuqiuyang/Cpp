/*************************************************************************
	> File Name: mytest.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#ifndef _MYTEST_H
#define _MYTEST_H

#define COLOR(msg, code) "\033[0;" #code "m" msg "\033[0m"
#define RED(msg) COLOR(msg, 31)
#define GREEN(msg) COLOR(msg, 32)
#define YELLOW(msg) COLOR(msg, 33)
#define BLUE(msg) COLOR(msg, 34)

int *getOrderedData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = i;
    return arr;
}

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = rand() % n;
    return arr;
}

#define TEST(func, arr, n) __TEST(#func, func, arr, n)

int check(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return 0;
    }
    return 1;
}

void __TEST(
    const char *str, 
    void (*func)(int *,int,int), 
    int *arr, 
    int n
) {
    int *temp = (int *)malloc(sizeof(int) * n);
    memcpy(temp, arr, sizeof(int) * n);
    long long b = clock();
    func(temp, 0, n - 1);
    long long e = clock();
    if (check(temp, n)) {
        printf(GREEN("[  OK      ]"));
    } else {
        printf(RED("[  FAILED  ]"));
    }
    printf(" %s " YELLOW("(%lld ms)\n"), str, 1000 * (e - b) / CLOCKS_PER_SEC);
    return ;
}

#endif
