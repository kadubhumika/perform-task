#include <stdio.h>

#define MAX 1000   

int box[MAX];    

int ways(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (box[n] != -1) {
        return box[n];
    }
    box[n] = ways(n - 1) + ways(n - 2);
    return box[n];
}

int climbStairs(int n) {
    for (int i = 0; i <= n; i++) {
        box[i] = -1;
    }
    return ways(n);
}

