/*************************************************************************
	> File Name: insert_sort_test.cpp
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
#include "insert_sort.h"
using namespace std;

int main() {
    #define MAX_N 50000
    int *arr = getRandData(MAX_N);
    TEST(insert_sort, arr, MAX_N);
    TEST(unguarded_insert_sort, arr, MAX_N);
    #undef MAX_N
    return 0;
}
