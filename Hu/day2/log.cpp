/*************************************************************************
	> File Name: log.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

#ifdef DEBUG

#define LOG(frm, args...) { \
    printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__); \
    printf(frm, ##args); \
    printf("\n"); \
}

#else 

#define LOG(frm, args...)

#endif

void test() {
    LOG("hello world"); // 调试信息
    return ;
}

#define CAT(a, b) a##b

int main() {
    int a = 123, haizei = 9973;
    CAT(hai, zei) = 10000;
    LOG("haizei = %d", haizei);
    LOG("a = %d", a);
    LOG("hello world"); // 调试信息
    test();
    printf("log program\n");
    return 0;
}
