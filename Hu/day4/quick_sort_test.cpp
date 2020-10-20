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
    TEST(quick_sort_v2, arr, MAX_N);
    TEST(quick_sort_v3, arr, MAX_N);
    TEST(quick_sort_v4, arr, MAX_N);
    TEST(quick_sort_v5, arr, MAX_N);
    TEST(quick_sort_v6, arr, MAX_N);
    free(arr);
    #undef MAX_N
    #define MAX_N 50000
    arr = getOrderedData(MAX_N);
    TEST(quick_sort_v1, arr, MAX_N);
    TEST(quick_sort_v2, arr, MAX_N);
    TEST(quick_sort_v3, arr, MAX_N);
    TEST(quick_sort_v4, arr, MAX_N);
    TEST(quick_sort_v5, arr, MAX_N);
    TEST(quick_sort_v6, arr, MAX_N);
    free(arr);
    #undef MAX_N
    return 0;
}
