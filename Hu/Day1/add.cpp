/*************************************************************************
	> File Name: add.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 一  8/24 20:16:39 2020
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

int add1(int a, int b) {
    return a + b;
}

class ADD {
public :
    int operator()(int a, int b) {
        return a + b;
    }
};

template<typename T, typename U>
auto add3(T a, U b) -> decltype(a + b) {
    return a + b;
}

auto add4 = [](int a, int b) -> int {
    return a + b;
};

int arr(int x) {
    return 2 * x;
}

int main() {
    ADD add2;
    cout << add1(3, 4) << endl;
    cout << add2(3, 4) << endl;
    cout << add3(3, 4) << endl;
    cout << add4(3, 4) << endl;
    
    int f[10];
    f[3];
    arr(3);
    return 0;
}
