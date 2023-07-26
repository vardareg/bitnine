#include <stdio.h>

int F(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    return F(n-3) + F(n-2);
}

int main() {
    int n = 10; // change this to the value you want to compute
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}
