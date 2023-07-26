#include <stdio.h>

int F(int n) {
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    
    for(int i = 3; i <= n; i++) {
        f[i] = f[i-3] + f[i-2];
    }
    
    return f[n];
}
int main() {
    int n = 10; // change this to the value you want to compute
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}