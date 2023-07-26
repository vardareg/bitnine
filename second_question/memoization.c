#include <stdio.h>

int f[10000]; // Assume n is less than 10000

int F(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    // if the value has been computed, use it directly
    if(f[n] != -1)
        return f[n];

    // otherwise, compute the value and store it
    f[n] = F(n-3) + F(n-2);
    return f[n];
}

void initialize() {
    for(int i = 0; i < 10000; i++) {
        f[i] = -1;
    }
}

int main() {
    int n = 10; // replace this with the value you want
    initialize();
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}
