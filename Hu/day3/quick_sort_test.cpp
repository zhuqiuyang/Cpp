/*************************************************************************
	> File Name: quick_sort_test.cpp
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
#include "mytest.h"
#include "quick_sort.h"
using namespace std;

int main() {
    #define MAX_N 10000000
    int *arr = getRandData(MAX_N);
    TEST(quick_sort_v1, arr, MAX_N);
    #undef MAX_N
    return 0;
}
