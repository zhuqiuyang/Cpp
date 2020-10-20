/*************************************************************************
	> File Name: virtual.cpp
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

class A {
public :
    virtual void say(int x) {
        cout << this << endl;
        cout << "class A : " << x << endl;
    }
};

class B : public A {
public :
    void say(int x) override {
        cout << this << endl;
        cout << "class B : " << x << endl;
    }
};

typedef void (*func)(void *, int);

int main() {
    cout << sizeof(B) << endl;
    B b;
    A &a = b;
    A *c = &b;
    ((func **)(&b))[0][0](&b, 123);
    a.say(123);
    b.say(123);
    c->say(123);
    return 0;
}
