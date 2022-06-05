#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int a, b, c, d, x, y;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = max(a, b);
    y = max(c,d);
    int ans = max(x,y);
    printf("%d", ans);
    
    return 0;
}

//Problem link
//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true&h_r=next-challenge&h_v=zen