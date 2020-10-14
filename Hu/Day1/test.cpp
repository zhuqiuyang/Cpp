/*************************************************************************
	> File Name: test.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 一  8/24 20:06:50 2020
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

int main() {
    int n = 0x61626364;
    int *p = &n;
    char *q = (char *)(&n);
    printf("%d\n", *p);
    printf("%c\n", *q);
    return 0;
}
