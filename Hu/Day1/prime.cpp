/*************************************************************************
	> File Name: prime.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 一  8/24 19:47:00 2020
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

#define MAX_N 10000
int prime[MAX_N + 5];

void init_prime() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i] == 0) prime[++prime[0]] = i;
    }
    return ;
}

bool isSame(int x, int y) {
    int x_cnt = 0, y_cnt = 0;
    while (x) {
        x_cnt += 1 << (x % 10 * 2);
        x /= 10;
    }
    while (y) {
        y_cnt += 1 << (y % 10 * 2);
        y /= 10;
    }
    return x_cnt == y_cnt;
}

int main() {
    init_prime();
    cout << prime[0] << endl; 
    cout << prime[1] << endl;
    cout << prime[5] << endl;
    for (int i = 1; i <= prime[0]; i++) {
        for (int j = i + 1; j <= prime[0]; j++) {
            if (isSame(prime[i], prime[j])) {
                cout << prime[i] << " " << prime[j] << endl;
            }
        }
    }
    return 0;
}
